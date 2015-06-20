#include "../include/geneClass.hpp"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <cfloat>
#include <ctime>
#define POP_SIZE 1000

int Genetic::Solve() {
	//Создаем стартовую популяцию
	Generator(parameter_area_a, parameter_area_b, parameter_area_c, parameter_area_d, 100);
	//Посчитаем для каждого элемента его значение
	for (int i = 0; i < POP_SIZE; i++) {
		Calculate(vector_array[i]);
		};
	//запускаем итерацию
	for (int i = 0; i < 100; i++) { //100 итераций
		//std::cout << "итерация: " << i << " ";
		min_value = DBL_MAX;
		max_value = DBL_MIN;
		for (int i = 0; i < POP_SIZE; i++)
			PreFitness(vector_array[i]); //найдем минимальное и максимальное значение

		for (int i = 0; i < POP_SIZE; i++)
			Fitness(vector_array[i]); //теперь определим коэф. выживаемости для каждой особи
		NewPopulation(); //создаем новую популяцию
	}
	return 0;
}
