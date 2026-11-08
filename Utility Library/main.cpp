#include <iostream>
#include "clsUtil.h"
#include "../../Date Library/Date Library/clsDate.h"



int main()
{
	clsUtil::Srand();
	
	std::string Arr[5];
	int Length = 5;
	
	clsUtil::FillArrayWithRandomKeys(Arr, Length, 6, 5, clsUtil::MixChars);


	system("pause>0");
	return 0;
}