#include "../include/GeneticGenerator.hpp"
//#include "../include/geneClass.hpp"
#include<ctime>
#include <cstdlib>

vec Genetic::Generator(int n, float a, float b) {
	vec array[n];
	vec elem;
	float pre_elem;
	for (int i = 0; i < n; i++) {
		elem = array[i];
		for (int j = 0; j < 4; j++) {
			srand(time(0));
			pre_elem = (rand() % b + a) + 1/(rand()+1); //Genraim:это 100% не будет работать, из-за косяка в типах всего этого.
			elem.variable[j] = pre_elem;
			elem.solution = 0;
		}

	}
	return array; //Genraim:я думаю так делать очень-очень плохо
	//Genraim:Не нужно ничего возвращать (скорее всего), лучше модернизировать изначальный массив, описанный в классе (vector_array[])
}
