#include "../include/geneClass.hpp"
#include "../include/GeneticCalculate.hpp"
#include "../include/GeneticGenerator.hpp"
#include "../include/GeneticMutation.hpp"
#include "../include/GeneticCrossing.hpp"
#include "../include/GeneticSolve.hpp"
#include <stdlib.h>

struct vec {
//структура, в которой будем держать значения всех переменных,
//а также значение функции при данных значениях переменной
	float variable[4]; //для функции 4х переменных
	float solution; // решение при подстановке значений variable[i]
	float fitness;
};

class Genetic {
	public:
		void GiveConstVector(vec v) {const_vector = v;}; //Читаем коэффиценты в уравнении и записываем их в класс
		int Solve();
	private:
		vec const_vector; //здесь хранятся коэффициенты при неизвестных и свободный член
		vec vector_array[100];
		float fit_array;

	protected:
		void Genetic::Fitness(vec& gene) {
			if (gene.solution != 0) gene.fitness = (1/abs(gene.solution))/fit_array; else gene.fitness = 0;
		}
		vec Generator(int, float, float); //пока ищем в 4х-мерном гиперкубе
		vec Mutation(vec);
		vec Crossing(vec, vec);
		void Calculate(vec&);
		void NewPopulation();



};


