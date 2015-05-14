//#include "../include/GeneticFitness.hpp"
#include "../include/geneClass.hpp"
#include <cmath>

void Genetic::Fitness(vec& v) {
	if (v.solution < 0)
		v.fitness = v.solution/2*fit_array; //в таком случае fit_array будет числом отрицательным, а значит два минуса дадут плюс
	else if (v.solution > 0)
		v.fitness = 0.5 + v.solution/fabs(fit_array);
	else v.fitness = 0.5;
}
