#include "../include/geneClass.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cfloat>
#include <iostream>

#define N 2

void Genetic::NewPopulation() {
	const int MUT_VALUE = 10; //число особей, использованных для мутации
	const int CROSS_VALUE = 500; //число особей, которое будет получено после скрещивания
	int pop_size = vector_array.size();
	//srand(time(NULL));
	//Скопировали предыдущую популяцию в буфер:
	for (int i = 0; i < pop_size; i++)
		temp_array.push_back(vector_array[i]);
	//Теперь добавим мутантов в буфер:
	//std::cout << " ( ";
	for (int i = 0; i < MUT_VALUE; i++) {
		int j = rand() % pop_size;
		for (int k = 0; k < 10; k++) {
			//srand(time(NULL));
			vec v = Mutation(vector_array[j]);
			Calculate(v);
			PreFitness(v);
			temp_array.push_back(v);
			//std::cout << v.variable[0] << " " << v.variable[1] << ";";
		}
	}
	//std::cout << ")";
	//Сделаем некоторое количество скрещиваний
	int i = 0;
	//std::cout << " [ ";
	while (i < CROSS_VALUE) {
		int parent1 = rand() % pop_size;
		int parent2 = rand() % pop_size;
		if (LiveOrNot(vector_array[parent1]) && LiveOrNot(vector_array[parent2])) {
			vec v = Crossing(vector_array[parent1], vector_array[parent2]);
			Calculate(v);
			PreFitness(v);
			temp_array.push_back(v);
			i++;
			//std::cout << v.variable[0] << " " << v.variable[1] << ";";
		}
	}
	//std::cout << "]";
	//Теперь посчитаем коэффиценты выживаемости
	for (i = 0; i < (int)temp_array.size(); i++) {
		Fitness(temp_array[i]);
	}
	//Теперь начнем производить отбор элементов
	std::cout << "vec_size: " << vector_array.size() << " ";
	vector_array.clear();
	for (i = 0; i < (int)temp_array.size(); i++)
		Selection(pop_size, temp_array[i]);
	//Пара завершающих штрихов
	std::cout << "temp_size: " << temp_array.size() << std::endl;
	PrintResult();
	temp_array.clear();
	min_value = DBL_MAX;
	max_value = DBL_MIN;
}

/*void Genetic::NewPopulation() {
	srand(time(0));
	int i;
	for (i = 0; i < 5; i++) {
		int j = rand() % POP_SIZE;
		for (int k = 10*(i-1); k < 10*i; k++) {
			temp_array[k] = Mutation(vector_array[j]);
			Calculate(temp_array[k]);
			PreFitness(temp_array[k].solution);
			Fitness(temp_array[k]);
		}
	}
	i = 50;

	while(i < 200) {
		int k = rand() % POP_SIZE;
		if (LiveOrNot(vector_array[k])) {
			i++;
			temp_array[i] = vector_array[k];
		}
	}
	while(i < POP_SIZE) {
		int k = rand() % POP_SIZE;
		int j = rand() % POP_SIZE;
		if ( LiveOrNot(vector_array[k]) && LiveOrNot(vector_array[j]) ) {
			i++;
			temp_array[i] = Crossing(vector_array[k], vector_array[j]);
			Calculate(temp_array[i]);
			PreFitness(temp_array[i].solution);
			Fitness(temp_array[i]);
		}
	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = temp_array[i];
}
*/
