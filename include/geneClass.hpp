#ifndef GEN_CLASS_HPP_
#define GEN_CLASS_HPP_
#define POP_SIZE 1000
#include <vector>

struct vec {
	double variable[2];
	double solution;
	double fitness;
};
class Genetic {
public:
	void GiveConstVector(vec v);
	int Solve();
	int PrintResult();
	void Parametre(int);
private:
	vec const_vector;
	std::vector<vec> vector_array;
	std::vector<vec> temp_array;
	double max_value;
	double min_value;
	int parameter_optimal_size_population;
protected:
	void Fitness(vec& gene);
	bool LiveOrNot(vec);
	int Generator(int, int, int);
	vec Mutation(vec);
	vec Crossing(vec, vec);
	int Calculate(vec&);
	void NewPopulation();
	void PreFitness(vec);
	void Selection(int, vec);
};
#endif
