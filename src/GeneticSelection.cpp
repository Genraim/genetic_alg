#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#include <cmath>

void Genetic::Selection (int pop_size, vec v) {
	double temp;
	temp = (pop_size - parameter_optimal_size_population)/parameter_optimal_size_population;
	temp++;
	if (LiveOrNot(pow(v.fitness, temp)))
		vector_array.push_back(v);
}
