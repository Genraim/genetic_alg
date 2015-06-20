#ifndef GEN_CLASS_HPP_
#define GEN_CLASS_HPP_
#define N 2
#include <vector>

struct vec {
	double variable[N];
	double solution;
	double fitness;
};
class Genetic {
public:
	void GiveConstVector(vec v); //функция ввода коэф. перед аргументами
	int Solve(); //собственно поиск решения
	int PrintResult(); //вывод
	void Parametre(int, double, double, double, double); //ввод параметра
private:
	vec const_vector; //переменная для коэф. функции
	std::vector<vec> vector_array; //основная популяция
	std::vector<vec> temp_array; //буфер
	double max_value; //максимальное значение популяции
	double min_value; //минимальное значение популяции
	int parameter_optimal_size_population; //предпочтительный размер популяции
	double parameter_area_a;
	double parameter_area_b;
	double parameter_area_c;
	double parameter_area_d;
protected:
	void Fitness(vec& gene); //вычисление коэф. выживаемости
	bool LiveOrNot(double); //по коэф. выживаемости и священному рандому определяет выживет особь или нет
	int Generator(double, double, double, double, int); //генерация стартовой популяции
	vec Mutation(vec);
	vec Crossing(vec, vec);
	int Calculate(vec&);
	void NewPopulation(); //генерирует новую популяцию на основе старой, по сути использует в себе все остальные
	void PreFitness(vec); //нахождение максимального и мнимального значений для популяции
	void Selection(int, vec); //выбор тех, кто выживет и пойдет в новую популяцию
	int RandomInt(int, int);
	double RandomDouble(double, double);
};
#endif
