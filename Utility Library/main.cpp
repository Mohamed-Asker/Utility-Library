#include <iostream>
#include "clsUtil.h"



int main()
{
	clsUtil::Srand();
	
	std::cout << clsUtil::GenerateWord(clsUtil::MixChars,8) << "\n";


	system("pause>0");
	return 0;
}