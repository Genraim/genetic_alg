#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cfloat>
//#include <iostream>

#define N 2

void Genetic::NewPopulation() {
	const int MUT_VALUE = 10; //число особей, использованных для мутации
	const int CROSS_VALUE = 500; //число особей, которое будет получено после скрещивания
	int pop_size = vector_array.size();
	//Скопировали предыдущую популяцию в буфер:
	for (int i = 0; i < pop_size; i++)
		temp_array.push_back(vector_array[i]);
	//Теперь добавим мутантов в буфер:
	for (int i = 0; i < MUT_VALUE; i++) {
		//int j = rand() % pop_size;
		int j = RandomInt(0, pop_size);
		for (int k = 0; k < 10; k++) {
			vec v = Mutation(vector_array[j]);
			Calculate(v);
			PreFitness(v);
			temp_array.push_back(v);
		}
	}
	//Сделаем некоторое количество скрещиваний
	int i = 0;
	while (i < CROSS_VALUE) {
		int parent1 = RandomInt(0, pop_size);
		int parent2 = RandomInt(0, pop_size);
		vec v = Crossing(vector_array[parent1], vector_array[parent2]);
		Calculate(v);
		PreFitness(v);
		temp_array.push_back(v);
		i++;

	}
	//Теперь посчитаем коэффиценты выживаемости
	for (i = 0; i < (int)temp_array.size(); i++) {
		Fitness(temp_array[i]);
	}
	//Теперь начнем производить отбор элементов
	//std::cout << "vec_size: " << vector_array.size() << " ";
	vector_array.clear();
	for (i = 0; i < (int)temp_array.size(); i++)
		Selection(pop_size, temp_array[i]);
	//Пара завершающих штрихов
	//std::cout << "temp_size: " << temp_array.size() << std::endl;
	//PrintResult();
	temp_array.clear();
	min_value = DBL_MAX;
	max_value = DBL_MIN;
}
