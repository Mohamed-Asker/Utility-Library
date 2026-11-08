#include <iostream>
#include "clsUtil.h"



int main()
{
	clsUtil::Srand();
	
	clsUtil::GenerateKeys(5,clsUtil::MixChars, 6,3);


	system("pause>0");
	return 0;
}