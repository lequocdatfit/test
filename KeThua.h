#pragma once
#include "CoSo.h"
class KeThua:public CoSo
{
	int y;
public:
	void Phatsinhloi()
	{
		throw* this;
	}
};

