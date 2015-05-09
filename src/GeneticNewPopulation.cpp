#include "geneClass.hpp"
#include "GeneticNewPopulation.hpp"
#include <cstdlib>
#include <ctime>


void Genetic::NewPopulation() {
	vec temp_array[100];
	//srand(time(0));
	for (int i = 0; i < 4; i++) {
		int j = rand() % 100;
		temp_array[i] = Mutation(vector_array[j]);
		Calculate(temp_array[i]);
		Fitness(temp_array[i]);
	}
	for (int i = 0; i < 48; i++) {
		int j = rand() % 100;

	}
}
