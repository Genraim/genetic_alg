#ifndef GEN_CLASS_HPP_
#define GEN_CLASS_HPP_
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
	vec vector_array[100];
	float fit_array;
protected:
	void Fitness(vec& gene);
	int Generator(int, int);
	vec Mutation(vec);
	vec Crossing(vec, vec);
	int Calculate(vec&);
	void NewPopulation();
};
#endif
