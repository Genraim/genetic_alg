#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/geneClass.hpp"

using namespace std;

int read(vec&);
class Genetic gene;
int main() {
	srand(time(NULL));
	vec constvec;
	read(constvec);
	gene.GiveConstVector(constvec);
	gene.Parametre(500);
	gene.Solve();
	gene.PrintResult();

}
int read(vec& cvec) {
	cout << "Программа для нахождения минимума\n" <<
			"--------------------------------\n" <<
			"Введите коэффициенты: " << endl;

	cout << "a: \n";
	cin >> cvec.variable[0];
	cout << "\nb: \n";
	cin >> cvec.variable[1];
	cout << "\nСвободный член: \n";
	cin >> cvec.solution;
	return 0;
}

