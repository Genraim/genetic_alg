#include "geneClass.hpp"
#include "GeneticSolve.hpp"
#include <stdlib.h>
#include <algorithm>


int Genetic::Solve() {
	Generator(100, 0, 10);

	for (int i = 0; i < 100; i++) {
		Calculate(vector_array[i]);
		};


	fit_array = 0;

	for (int i = 0; i < 100; i++){
		if (0 != vector_array[i].solution)
			fit_array += 1/abs(vector_array[i].solution);
	};

	for (int i = 0; i < 100; i++) {
		Fitness(vector_array[i]);
	};
	NewPopulation();

	return 0;
}
