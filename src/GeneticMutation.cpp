#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>

vec Genetic::Mutation(vec gene) {
	//srand(time(0));
	for (int i = 0; i < 4; i++) {
		if (1 == rand() % 2) {
			gene.variable[i] = rand()/(1+rand());
		}
	}
	return gene;
}
