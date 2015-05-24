#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/geneClass.hpp"
#define POP_SIZE 1000

using namespace std;

int read(vec&);
class Genetic gene;
int main() {
	srand(time(NULL));
	vec constvec; //здесь будем хранить коэф при каждой неизвестной, а также правую часть уравения (свободный член)
	read(constvec);
	gene.GiveConstVector(constvec);
	gene.Parametre(500);
	gene.Solve();
	gene.PrintResult();
	/*Функционал который бы хотелось запилить:
	 * Вывод лога, нужно знать что происходит в промежуточных итерациях
	 * Можно вообще все выводить куда-нибудь в файл
	 * Итоговый файл который будет содержать точки решения и все остальное
	 *  //Это все пилить не обязательно, но хотелось бы
	 */

}
int read(vec& cvec) {
	cout << "Программа для нахождения минимума\n" <<
			"--------------------------------\n" << "Введите коэффициенты: " << endl;

	cout << "a: \n";
	cin >> cvec.variable[0];
	cout << "\nb: \n";
	cin >> cvec.variable[1];
	//cout << "\n c: \n";
	//cin >> cvec.variable[2];
	//cout << "\n d: \n";
	//cin >> cvec.variable[3];
	cout << "\nСвободный член: \n";
	cin >> cvec.solution;
	return 0;
}

