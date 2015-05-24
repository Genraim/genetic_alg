#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#define POP_SIZE 1000
#define N 2

int Genetic::Generator(int a, int b, int n) {
	vec elem;
	//srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < N; j++)
			elem.variable[j] = (rand() % (b-a) + a) + 1/(double)(rand()+1);
		vector_array.push_back(elem);
		}

	return 0;
}
