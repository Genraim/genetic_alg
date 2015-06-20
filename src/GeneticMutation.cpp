#include "../include/geneClass.hpp"
#include <ctime>
#include <cstdlib>
#define N 2
vec Genetic::Mutation(vec gene) { //мутация
	for (int i = 0; i < N; i++) { //по каждой переменной
		if (LiveOrNot(0.5)) { //мутировать переменную или нет?
			if (LiveOrNot(0.5)) //если мутировать, то добавить произвольное значение или вычесть?
				gene.variable[i] += RandomDouble(0, 1);
			else
				gene.variable[i] -= RandomDouble(0, 1);
		}
	}
	return gene;
}

