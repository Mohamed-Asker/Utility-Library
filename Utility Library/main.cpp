#include <iostream>
#include "clsUtil.h"
#include "../../Date Library/Date Library/clsDate.h"



int main()
{
	clsUtil::Srand();
	
	std::string text = "Mohamed";
	std::string test = clsUtil::EncryptText(text, 20);

	std::cout << test << "\n";
	std::cout << clsUtil::DecryptText(test, 20) << "\n";



	system("pause>0");
	return 0;
}