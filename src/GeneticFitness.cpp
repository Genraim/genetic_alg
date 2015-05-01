//#include "../include/geneClass.hpp"
#include "../include/GeneticFitness.hpp"
//Genraim:не уверен что нужно использовать &gene, а не gene //убрал, но теперь не уверен что надо так =)
float Genetic::Fitness(vec gene) {
	float result = 0;
	for (int i = 0; i < 4; i++) {
		result += const_vector.variable[i] * gene.variable[i];
	};
	gene.solution = result - const_vector.solution;
	return gene; //возвращаемый тип не соответствует объявленому, пока не фиксить!
}
