#include "../include/geneClass.hpp"
//#include "GeneticSolve.hpp"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#define POP_SIZE 100

int Genetic::Solve() {
	std::cout << "const: " << const_vector.variable[0] << const_vector.variable[1] << const_vector.variable[2] << const_vector.variable[3] << const_vector.solution << std::endl;
	std::cout << "Старт поиска. Начало генерации. ";
	int res = Generator(0, 10);
	std::cout << "Завершение генерации. Код: " << res << ". Запуск подсчета. Коды:";
	for (int i = 0; i < POP_SIZE; i++) {
		res = Calculate(vector_array[i]);
		//std::cout << res;
		};
	std::cout << vector_array[0].solution;
	std::cout << "\n Завершение подсчета. Начало итерации: \n";
	for (int i = 0; i < 50; i++) {
		std::cout << "start: " << i << ", ";
		fit_array = 1;
		for (int i = 0; i < POP_SIZE; i++)
			fit_array = (fit_array > vector_array[i].solution) ? vector_array[i].solution : fit_array;

		for (int i = 0; i < POP_SIZE; i++) {
		Fitness(vector_array[i]);
		};
		NewPopulation();
		std::cout << "end.\n";
	}
	std::cout << "Завершение поиска.\n";
	return 0;
}
