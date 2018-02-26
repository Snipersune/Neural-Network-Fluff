#include "Connection.h"

void _init_(struct Connection * connection, Node * p, float w)
{
	connection->parent = p;
	connection->weight = w;
}
