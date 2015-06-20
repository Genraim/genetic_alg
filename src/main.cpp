#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/geneClass.hpp"

using namespace std;

int read_factor(vec&);
int read_area(double&, double&, double&, double&);
class Genetic gene;
int main() {
	srand(time(NULL));
	vec constvec;
	read_factor(constvec);
	gene.GiveConstVector(constvec);
	double a, b, c, d;
	read_area(a, b, c, d);
	gene.Parametre(500, a, b, c, d);
	gene.Solve();
	gene.PrintResult();

}
int read_factor(vec& cvec) {
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

int read_area(double& a, double& b, double& c, double& d) {
	cout << "Введите границы области поиска:\n ";
	cin >> a >> b >> c >> d;
	return 0;
}

