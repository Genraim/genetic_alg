#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>

#define N 2
#define POP_SIZE 1000


void Genetic::NewPopulation() {
	srand(time(0));
	int i;
	for (i = 0; i < 5; i++) {
		int j = rand() % POP_SIZE;
		for (int k = 10*(i-1); k < 10*i; k++) {
			temp_array[k] = Mutation(vector_array[j]);
			Calculate(temp_array[k]);
			PreFitness(temp_array[k].solution);
			Fitness(temp_array[k]);
		}
	}
	i = 50;

	while(i < 200) {
		int k = rand() % POP_SIZE;
		if (LiveOrNot(vector_array[k])) {
			i++;
			temp_array[i] = vector_array[k];
		}
	}
	while(i < POP_SIZE) {
		int k = rand() % POP_SIZE;
		int j = rand() % POP_SIZE;
		if ( LiveOrNot(vector_array[k]) && LiveOrNot(vector_array[j]) ) {
			i++;
			temp_array[i] = Crossing(vector_array[k], vector_array[j]);
			Calculate(temp_array[i]);
			PreFitness(temp_array[i].solution);
			Fitness(temp_array[i]);
		}
	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = temp_array[i];
}
