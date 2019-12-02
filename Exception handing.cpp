#include <iostream>
#include "CoSo.h"
#include "KeThua.h"
using namespace std;

int main()
{
	KeThua b;
	try
	{
		test(b);
	}
	catch (KeThua& b)	// Nên để catch(KeThua &b)  ở trước
	{
		cout << "Loi ke thua" << endl;
	}
	catch (CoSo& a)
	{
		cout << "Loi co so" << endl;
	}
	return 0;
}

