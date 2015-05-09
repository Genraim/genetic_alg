#include "GeneticCalculate.hpp"
#include "geneClass.hpp"

void Genetic::Calculate(vec& v) {
	float var;
	for (int i = 0; i < 4; i++){
		var = const_vector.variable[i] * v.variable[i];
	}
	v.solution = var - const_vector.solution;
}
