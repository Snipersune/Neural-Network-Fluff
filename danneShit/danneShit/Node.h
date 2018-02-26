#include "defs.h"

#pragma once


typedef struct Node
{
	float input;
	int parent_num;

	struct Connection *parent_connections;


} Node, Input, Hidden, Output;


void _init_(Node* node, int parent_size);
void _free_(Node* node);


float calc_input(Node* node);
void set_input(Node* node);
