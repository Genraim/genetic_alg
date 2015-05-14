#include "../include/geneClass.hpp"
//#include "GeneticNewPopulation.hpp"
#include <cstdlib>
#include <ctime>
#define N 4
#define POP_SIZE 100


void Genetic::NewPopulation() {
	vec temp_array[POP_SIZE];
	//srand(time(0));
	int i;
	for (i = 0; i < 4; i++) {
		int j = rand() % 100;
		temp_array[i] = Mutation(vector_array[j]);
		Calculate(temp_array[i]);
		fit_array = (fit_array > vector_array[i].solution) ? vector_array[i].solution : fit_array;
		Fitness(temp_array[i]);
	}
	while(i < 14) {
		int k = rand() % POP_SIZE;
		if (vector_array[k].fitness > 1/(1+rand())) {
			i++;
			temp_array[i] = vector_array[k];
		}
	}
	while(i < POP_SIZE) {
		int k = rand() % POP_SIZE;
		int j = rand() % POP_SIZE;
		if ( vector_array[k].fitness > 1/(1 + rand()) &&
				vector_array[j].fitness > 1/(1 + rand()) ) {
			i++;
			temp_array[i] = Crossing(vector_array[k], vector_array[j]);
			Calculate(temp_array[i]);
			fit_array = (fit_array > vector_array[i].solution) ? vector_array[i].solution : fit_array;
			Fitness(temp_array[i]);
		}
	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = temp_array[i];
}
