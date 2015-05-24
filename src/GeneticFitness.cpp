//#include "../include/GeneticFitness.hpp"
#include "../include/geneClass.hpp"

void Genetic::Fitness(vec& v) { //вычисление выживаемости элемента
	if (max_value != min_value)
		v.fitness = 1 - (v.solution - min_value)/(max_value - min_value);
	else v.fitness = 0.5;
}
