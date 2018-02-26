#pragma once
#include "defs.h"

struct Connection
{
	float weight;
	Node *parent;
};

void _init_(struct Connection* connection, Node* p, float w);