#include "../include/geneClass.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 2

void Genetic::GiveConstVector(vec v) {const_vector = v;}; //Читаем коэффиценты в уравнении и записываем их в класс
int Genetic::PrintResult() { //вывод результата
	vec min = vector_array[0];
	for (int i = 0; i < (int)vector_array.size(); i++)
		min = (min.solution < vector_array[i].solution) ? min : vector_array[i];
	for (int i = 0; i < N; i++)
		std::cout << min.variable[i] << " ";
	std::cout << "Solution: " << min.solution << std::endl;
	return 0;

}

void Genetic::PreFitness(vec v) { //коррекция минимума/максимума если необходимо
	max_value = (v.solution > max_value) ? v.solution : max_value;
	min_value = (v.solution < max_value) ? v.solution : min_value;
}

void Genetic::Parametre(int n, double a, double b, double c, double d) { //принимает параметры, пока есть только один параметр
	parameter_optimal_size_population = n;
	parameter_area_a = a;
	parameter_area_b = b;
	parameter_area_c = c;
	parameter_area_d = d;
}

int Genetic::RandomInt(int a, int b) { 
	if (b == a)
		return a;
	return rand() % (b-a) + a;
}

double Genetic::RandomDouble(double min, double max) {
	if (max - min < 0.0001)
		return min;
	return (rand()/(double)RAND_MAX)*(max - min) + min;
	//нужно что то придумать, чтобы число генерировалось точно в нужном диапазоне
} 

bool Genetic::LiveOrNot(double n) {
	return (n > rand()/(double)RAND_MAX);
}
