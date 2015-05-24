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
	int PrintResult(int pop_size);
private:
	vec const_vector;
	vec vector_array[POP_SIZE];
	vec temp_array[POP_SIZE];
	double max_value;
	double min_value;
protected:
	void Fitness(vec& gene);
	bool LiveOrNot(vec);
	int Generator(int, int);
	vec Mutation(vec);
	vec Crossing(vec, vec);
	int Calculate(vec&);
	void NewPopulation();
	void PreFitness(double);
};
#endif
