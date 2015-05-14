#include "../include/geneClass.hpp"
//#include "GeneticNewPopulation.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define N 4
#define POP_SIZE 100


void Genetic::NewPopulation() {
	//srand(time(0));
	int i;
	for (i = 0; i < 4; i++) {
		int j = rand() % POP_SIZE;
		temp_array[i] = Mutation(vector_array[j]);
		Calculate(temp_array[i]);
		fit_array = (fit_array > temp_array[i].solution) ? temp_array[i].solution : fit_array;
		Fitness(temp_array[i]);
	}
	std::cout << "i: " << i << " ";
	while(i < 14) {
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
			fit_array = (fit_array > vector_array[i].solution) ? vector_array[i].solution : fit_array;
			Fitness(temp_array[i]);
		}
	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = temp_array[i];
}
