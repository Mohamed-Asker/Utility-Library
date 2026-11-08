#include <iostream>
#include "clsUtil.h"
#include "../../Date Library/Date Library/clsDate.h"



int main()
{
	clsUtil::Srand();
	
	clsDate A;
	clsDate B("10/4/2001");

	A.PrintDate();
	B.PrintDate();
	clsUtil::Swap(A, B);
	A.PrintDate();
	B.PrintDate();
	

	system("pause>0");
	return 0;
}