#include <iostream>
#include "clsUtil.h"
#include "../../Date Library/Date Library/clsDate.h"



int main()
{
	clsUtil::Srand();
	
	double Arr[] = { 1.5,2,3.5,4 };
	int Length = 4;
	
	clsUtil::ShuffleArray(Arr, Length);


	system("pause>0");
	return 0;
}