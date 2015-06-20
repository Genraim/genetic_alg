#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>
#define N 2

vec Genetic::Crossing(vec mother, vec father) { //берем среднее по каждой из координат
	vec child;
	for (int i = 0; i < N; i++) {
		if (mother.variable[i] < father.variable[i])
			child.variable[i] = RandomDouble(mother.variable[i], father.variable[i]);
		else
			child.variable[i] = RandomDouble(father.variable[i], mother.variable[i]);
	}
	return child;
}
