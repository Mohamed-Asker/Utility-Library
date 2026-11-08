#include <iostream>
#include "clsUtil.h"



int main()
{
	clsUtil::Srand();
	std::cout << clsUtil::RandomNumber(1, 10) << "\n";
	std::cout << clsUtil::RandomNumber(1, 10) << "\n";
	std::cout << clsUtil::RandomNumber(1, 10) << "\n";
	std::cout << clsUtil::RandomNumber(1, 10) << "\n";
	std::cout << clsUtil::RandomNumber(1, 10) << "\n";


	system("pause>0");
	return 0;
}