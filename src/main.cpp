//Authors: Genraim and Quilch
#include <iostream>

#include "../include/geneClass.hpp"

using namespace std;

int read(vec &);
class Genetic gene;
int main() {
	vec constvec; //здесь будем хранить коэф при каждой неизвестной, а также правую часть уравения (свободный член)
	read(constvec);
	gene.GiveConstVector(constvec);

}
int read(vec &cvec) {
	cout << "Программа для нахождения корней линейного уравнения с 4-я неизвестными \n" <<
			"--------------------------------" << "Введите коэффициенты: " << endl;

	cout << "a: \n";
	cin >> cvec.variable[0];
	cout << "\n b: \n";
	cin >> cvec.variable[1];
	cout << "\n c: \n";
	cin >> cvec.variable[2];
	cout << "\n d: \n";
	cin >> cvec.variable[3];
	cout << "\n Свободный член: \n";
	cin >> cvec.solution;
	return 0;
}

