#include "geneClass.hpp"
#include "GeneticMutation.hpp"
#include<ctime>
#include <cstdlib>

void Genetic::Mutation(vec& gene) {
	//srand(time(0));
	for (int i = 0; i < 4; i++) {
		if (rand() % 2) {
			gene.variable[i] = rand()/rand();
		}
	}

}
