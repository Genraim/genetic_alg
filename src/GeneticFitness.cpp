//#include "../include/GeneticFitness.hpp"
#include "../include/geneClass.hpp"

void Genetic::Fitness(vec& v) {
	v.fitness = (1 + v.solution/fit_array)/(float)2;
}
