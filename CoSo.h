#pragma once
class CoSo
{
public:
	int x;
	virtual void Phatsinhloi()  // virtual giúp tạo tính đa hình cho Phatsinhloi();
	{
		throw* this;
	}
};

void test(CoSo& a);

