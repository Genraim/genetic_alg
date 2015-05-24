#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#define N 2
vec Genetic::Mutation(vec gene) { //мутация
	//srand(time(0));
	for (int i = 0; i < N; i++) { //по каждой переменной
		//srand(time(0));
		if (1 == rand() % 2) { //мутировать переменную или нет?
			if ( 1 == rand() % 2) //если мутировать, то добавить произвольное значение или нет?
				gene.variable[i] += rand()/(double)RAND_MAX;
			else
				gene.variable[i] -= rand()/(double)RAND_MAX;
		}
	}
	return gene;
}
