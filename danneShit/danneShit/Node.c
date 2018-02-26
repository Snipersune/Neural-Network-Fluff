#include "Node.h"

float calc_input(Node * node)
{
	float sum = 0;
	for (int i = 0; i < node->parent_num; i++) {
		sum += (node->parent_connections[i].weight) * (node->parent_connections[i].parent->input);
	}
	return sum;
}

void set_input(Node * node)
{
	node->input = calc_input(node);
}

void _init_(Node * node, int parentSize)
{
	node->parent_connections = malloc(parentSize*sizeof(node->parent_connections));
	node->parent_num = parentSize;
}

void _free_(Node * node)
{
	if (node->parent_connections != NULL) {
		free(node->parent_connections);
	}
}
