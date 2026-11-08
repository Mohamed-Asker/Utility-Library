#include <iostream>
#include "clsUtil.h"



int main()
{
	clsUtil::Srand();
	
	std::cout << clsUtil::GenerateKey(clsUtil::MixChars, 5, 6) << "\n";


	system("pause>0");
	return 0;
}