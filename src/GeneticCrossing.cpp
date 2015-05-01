#include "GeneticCrossing.hpp"
#include "geneClass.hpp"
#include <cstdlib>
#include <ctime>


vec Genetic::Crossing(vec mother, vec father) {
	vec child;
	//srand(time(0));
	if (rand() % 2) {
		child.variable[0] = mother.variable[0];
		child.variable[1] = mother.variable[1];
		child.variable[2] = father.variable[2];
		child.variable[3] = father.variable[3];
	}
	else {
		child.variable[0] = father.variable[0];
		child.variable[1] = father.variable[1];
		child.variable[2] = mother.variable[2];
		child.variable[3] = mother.variable[3];
	}
	return child;
}
