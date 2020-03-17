#pragma once
#include <vector>
class Node {
public:
	int layer;
	double bias;
	double value;
	std::vector<int> input;
	std::vector<int> weight;
	Node(int layer);
	void light();
	void adjust();
	double randomWeight();
	void addInput(int node);
	void changeValue(double new_value);
	void changeBias(double new_bias);
};
