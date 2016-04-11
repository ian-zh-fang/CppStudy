
#include <iostream>
#include "Listener.h"

Listener::Listener()
{
}

Listener::~Listener()
{
	this->dispose(false);
}

void Listener::disposed()
{
	this->dispose(true);
}

void Listener::dispose(bool disposing)
{
	std::cout << "class disposed . disposing is : " << disposing << std::endl;
}
