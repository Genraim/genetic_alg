#ifndef GEN_CLASS_HPP_
#define GEN_CLASS_HPP_
#define POP_SIZE 100

struct vec {
	float variable[4];
	float solution;
	float fitness;
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
	float fit_array;
protected:
	void Fitness(vec& gene);
	bool LiveOrNot(vec);
	int Generator(int, int);
	vec Mutation(vec);
	vec Crossing(vec, vec);
	int Calculate(vec&);
	void NewPopulation();
};
#endif
