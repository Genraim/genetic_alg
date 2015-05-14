#include "../include/geneClass.hpp"
#include <iostream>
#define N 4

void Genetic::GiveConstVector(vec v) {const_vector = v;}; //Читаем коэффиценты в уравнении и записываем их в класс
int Genetic::PrintResult(int pop_size) {
	std::cout << "Результат (надеюсь): \n";
	for (int i = 0; i < pop_size; i++) {
		for (int k = 0; k < N; k++) {
			std::cout << vector_array[i].variable[k] << std::endl;
		}
	};
	return 0;
}


