#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#define N 2
vec Genetic::Mutation(vec gene) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		if (1 == rand() % 2) {
			if ( 1 == rand() % 2)
				gene.variable[i] += rand()/(double)RAND_MAX;
			else
				gene.variable[i] -= rand()/(double)RAND_MAX;
		}
	}
	return gene;
}
