#include "genClass.hpp"

struct vec {
//структура, в которой будем держать значения всех переменных,
//а также значение функции при данных значениях переменной
	int type; // тип содержимого: константа(0), переменная(1), результат(2)
	float variable[4]; //для функции 4х переменных
	float solution; // решение при подстановке значений variable[i]
};

class GenerateClass {
	public:
		float Solve() {

		}
	private:
		vec svector;
		vec array[100];
	protected:
		float Fitness(vec &);

};

float GenerateClass::Fitness(vec &array) {
	vec elem;
	for (int i = 0; i < 100; i++){
		elem = array[i];
		for (int j = 0; j < 4; j++) {
			elem.solution = svector.variable[j] * elem.variable[j];
		}
	}
	return elem.solution;
}
