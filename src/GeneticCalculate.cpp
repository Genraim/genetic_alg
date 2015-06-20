#include "../include/geneClass.hpp"
#define N 2

int Genetic::Calculate(vec& v) { //вычисление значения
	double var = 0;
	for (int i = 0; i < N; i++){
		var += const_vector.variable[i] * v.variable[i] * v.variable[i];
	};
	v.solution = var - const_vector.solution;
	return 0;
}

