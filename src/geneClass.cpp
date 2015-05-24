#include "../include/geneClass.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 2

void Genetic::GiveConstVector(vec v) {const_vector = v;}; //Читаем коэффиценты в уравнении и записываем их в класс
int Genetic::PrintResult() {
	//std::cout << "Результат (надеюсь): \n";
	vec min = vector_array[0];
	for (int i = 0; i < (int)vector_array.size(); i++)
		min = (min.solution < vector_array[i].solution) ? min : vector_array[i];
	std::cout << min.variable[0] << " " << min.variable[1] << " solution: " << min.solution << std::endl;
	return 0;
}

bool Genetic::LiveOrNot(vec v) {
	//srand(time(0));
	return v.fitness >= rand()/(double)RAND_MAX;
}
void Genetic::PreFitness(vec v) {
	max_value = (v.solution > max_value) ? v.solution : max_value;
	min_value = (v.solution < max_value) ? v.solution : min_value;
}

void Genetic::Parametre(int n) {
	parameter_optimal_size_population = n;
}
