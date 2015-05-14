//#include "../include/GeneticCrossing.hpp"
#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>
#define N 4

vec Genetic::Crossing(vec mother, vec father) {
	vec child;
	for (int i = 0; i < N; i++)
		child.variable[i] = (mother.variable[i] + father.variable[i])/(float)2;
	return child;
}
