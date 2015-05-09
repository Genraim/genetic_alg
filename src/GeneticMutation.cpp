#include "geneClass.hpp"
#include "GeneticMutation.hpp"
#include <ctime>
#include <cstdlib>

vec Genetic::Mutation(vec gene) {
	//srand(time(0));
	for (int i = 0; i < 4; i++) {
		if (rand() % 2) {
			gene.variable[i] = rand()/(1+rand()); //возможно деление на ноль, поправить в следующем коммите
		}
	}
	return gene;
}
