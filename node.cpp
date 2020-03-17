#include "node.h"
#include <vector>
std::vector<Node> nodes;
Node::Node(int layer)
	: layer(layer) {}
void Node::light() {
	double output = 0;
	for (int i = 0; i < input.size(); i++) {
		output += weight[i] * nodes[input[i]].value;
	}
	output += bias;
	output = 1 / (1 + exp(-output));
	value = output;
}
void Node::adjust() {

}
double Node::randomWeight() {
	return(rand() % 10000 / 10000);
}
void Node::addInput(int node) {
	input.push_back(node);
	weight.push_back(randomWeight());
}
void Node::changeValue(double new_value) {
	value = new_value;
}
void Node::changeBias(double new_bias) {
	bias = new_bias;
}
