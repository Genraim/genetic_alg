#include "../include/geneClass.hpp"
#include "../include/GeneticFitness.hpp"

struct vec {
//структура, в которой будем держать значения всех переменных,
//а также значение функции при данных значениях переменной
	float variable[4]; //для функции 4х переменных
	float solution; // решение при подстановке значений variable[i]
};

class Genetic {
	public:
		void GiveConstVector(vec v) {const_vector = v;}

	private:
		vec const_vector; //здесь хранятся коэффициенты при неизвестных и свободный член
		vec vector_array[100];
	protected:
		float Fitness(vec &);
		vec Generator(int, float, float);


};


