// 14april.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "worker.h"

using namespace std;


int main()
{
	worker obj;
	for (int i = 1; i < 10; i++)
		obj.push_back(i);
	obj.print(false);
	system("pause");
    return 0;
}

