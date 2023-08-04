#include "TurkeyAdpater.h"

TurkeyAdapter::TurkeyAdapter(Turkey* turkey)
{
	this->turkry = turkey;
}

void TurkeyAdapter::quack()
{
	this->turkry->gobble();
}

void TurkeyAdapter::fly()
{
	for (int i = 1; i <= 5; i++)
	{
		this->turkry->fly();
	}
}
