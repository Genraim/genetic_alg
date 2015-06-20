#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#define N 2

int Genetic::Generator(double a, double b, double c, double d, int n) { //генерация n особей в интервале [a, b]
	vec elem;
	for (int i = 0; i < n; i++) {
		elem.variable[0] = RandomDouble(a, b);
		elem.variable[1] = RandomDouble(c, d);
		vector_array.push_back(elem);
		}

	return 0;
}

