//#include "../include/GeneticCrossing.hpp"
#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>
#define N 2

vec Genetic::Crossing(vec mother, vec father) { //берем среднее по каждой из координат
	vec child;
	for (int i = 0; i < N; i++)
		child.variable[i] = (mother.variable[i] + father.variable[i])/(double)2;
	return child;
}
