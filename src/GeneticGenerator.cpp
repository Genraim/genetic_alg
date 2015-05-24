#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#define POP_SIZE 1000

int Genetic::Generator(int a, int b) {
	vec array[POP_SIZE];
	vec elem;
	float pre_elem;
	srand(time(0));
	for (int i = 0; i < POP_SIZE; i++) {
		elem = array[i];
		for (int j = 0; j < 4; j++) {
			pre_elem = (rand() % b + a) + 1/(rand()+1);
			array[i].variable[j] = pre_elem;
			array[i].solution = 0;
		}

	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = array[i]; //эта строчка записала в массив класса то что мы сгенерировали
	std::cout << "0: " << vector_array[0].variable[0] << " " << vector_array[0].variable[1] << " " << vector_array[0].variable[2] << " " << vector_array[0].variable[3] << std::endl;
	return 0;
}
