//#include "../include/GeneticCalculate.hpp"
#include "../include/geneClass.hpp"
/**
	\file
	\brief Считает значение функции для данного вектора.

*/

void Genetic::Calculate(vec v) {
	float var;
	for (int i = 0; i < 4; i++){
		var = const_vector.variable[i] * v.variable[i];
	};
	v.solution = var - const_vector.solution;
}
/**
	Подсчитываем значение функции.
    \param[in, out] v Элемент типа вектор, результат записывается в соответствующее поле вектора.
*/
