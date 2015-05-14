//#include "../include/GeneticGenerator.hpp"
#include "../include/geneClass.hpp"
#include<ctime>
#include <cstdlib>
#define POP_SIZE 100
void Genetic::Generator(int a, int b) {
	vec array[POP_SIZE];
	vec elem;
	float pre_elem;
	for (int i = 0; i < POP_SIZE; i++) {
		elem = array[i];
		for (int j = 0; j < 4; j++) {
			//srand(time(0));
			pre_elem = (rand() % b + a) + 1/(rand()+1); //Genraim:это 100% не будет работать, из-за косяка в типах всего этого.
			array[i].variable[j] = pre_elem;
			array[i].solution = 0;
		}

	}
	for (int i = 0; i < POP_SIZE; i++)
		vector_array[i] = array[i]; //эта строчка записала в массив класса то что мы сгенерировали

}
