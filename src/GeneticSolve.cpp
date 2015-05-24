#include "../include/geneClass.hpp"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <cfloat>
#define POP_SIZE 1000

int Genetic::Solve() {
	int res = Generator(10, 100);
	for (int i = 0; i < POP_SIZE; i++) {
		res = Calculate(vector_array[i]);
		};
	for (int i = 0; i < 50; i++) { //число итераций
		min_value = FLT_MAX;
		max_value = FLT_MIN;
		for (int i = 0; i < POP_SIZE; i++)
			PreFitness(vector_array[i].solution);

		for (int i = 0; i < POP_SIZE; i++)
			Fitness(vector_array[i]);
		NewPopulation();
	}
	return 0;
}
