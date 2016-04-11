#pragma once

#include "Dispose.h"

class Listener:virtual public Dispose
{
public:
	Listener();
	~Listener();
	
	void disposed();

protected:
	virtual void dispose(bool);

private:

};