#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#define N 2

int Genetic::Generator(int a, int b, int n) { //генерация n особей в интервале [a, b]
	vec elem;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < N; j++)
			elem.variable[j] = (rand() % (b-a-1) + a) + 1/(double)(rand()+1); // -1 для того чтобы число не превысило b
		vector_array.push_back(elem);
		}

	return 0;
}
