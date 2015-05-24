#include "../include/geneClass.hpp"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <cfloat>
#include <ctime>
#define POP_SIZE 1000

int Genetic::Solve() {
	//std::cout << time(NULL) << std::endl;
	Generator(-50, 50, 100);
	std::cout << "gen: " << vector_array[10].variable[0] << " " << vector_array[10].variable[1] << std::endl;
	for (int i = 0; i < POP_SIZE; i++) {
		Calculate(vector_array[i]);
		};
	std::cout << "calc: " << vector_array[10].solution << std::endl;
	for (int i = 0; i < 100; i++) { //число итераций
		std::cout << "итерация: " << i << " ";
		min_value = DBL_MAX;
		max_value = DBL_MIN;
		for (int i = 0; i < POP_SIZE; i++)
			PreFitness(vector_array[i]);

		for (int i = 0; i < POP_SIZE; i++)
			Fitness(vector_array[i]);
		NewPopulation();
	}
	std::cout <<std::endl;
	std::cout << time(NULL) << std::endl;
	return 0;
}
