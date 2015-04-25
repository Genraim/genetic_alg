#include "GeneticFitness.hpp"

float Genetic::Fitness(vec &gene) {
	float result = 0;
	for (int i = 0; i < 4; i++) {
		result += const_vector.variable[i] * gene.variable[i];
	};
	gene.solution = result;
}
