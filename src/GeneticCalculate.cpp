#include "../include/geneClass.hpp"
#include <iostream>
/**
	\file
	\brief Считает значение функции для данного вектора.

*/

int Genetic::Calculate(vec& v) {
	float var;
	for (int i = 0; i < 4; i++){
		var += const_vector.variable[i] * v.variable[i];
	};
	v.solution = var - const_vector.solution;
	//std::cout << " " << var << " " << v.solution << " ";
	return 0;
}
/**
	Подсчитываем значение функции.
    \param[in, out] v Элемент типа вектор, результат записывается в соответствующее поле вектора.
*/
