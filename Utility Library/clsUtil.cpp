#include <iostream>
#include "clsUtil.h"



//Operations
//Operation(1)
void clsUtil::Srand()
{
	srand((unsigned)time(NULL));
}

//Operation(2)
int clsUtil::RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}