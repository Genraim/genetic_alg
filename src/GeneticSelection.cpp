#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>

void Genetic::Selection(int pop_size, vec v) { //пойдет в новую популяцию или нет, есть зависимость от размера популяции на предыдущей итерации
	//srand(time(0));
	if ( v.fitness >=
			(rand()/(double)RAND_MAX) +
			(pop_size - parameter_optimal_size_population)/(double)(3*parameter_optimal_size_population) )
		vector_array.push_back(v);
}
