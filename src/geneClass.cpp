#include "../include/geneClass.hpp"
#include "../include/GeneticFitness.hpp"
#include "../include/GeneticGenerator.hpp"
#include "../include/GeneticMutation.hpp"
#include "../include/GeneticCrossing.hpp"

struct vec {
//структура, в которой будем держать значения всех переменных,
//а также значение функции при данных значениях переменной
	float variable[4]; //для функции 4х переменных
	float solution; // решение при подстановке значений variable[i]
};

class Genetic {
	public:
		void GiveConstVector(vec v) {const_vector = v;} //Читаем коэффиценты в уравнении и записываем их в класс

	private:
		vec const_vector; //здесь хранятся коэффициенты при неизвестных и свободный член
		vec vector_array[100];
	protected:
		float Fitness(vec);
		vec Generator(int, float, float);
		void Mutation(vec&);
		vec Crossing(vec, vec);
		int Solve();


};


