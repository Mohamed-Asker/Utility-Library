#pragma once
#include <iostream>
#include "../../Date Library/Date Library/clsDate.h"




class clsUtil
{
protected:
	static char getSpecialCharacter();

public:

	//Enums
	enum enCharacterType
	{
		SmallLetter = 1,
		CapitalLetter = 2,
		DigitLetter = 3,
		MixChars = 4,
		SpecialLetter = 5
	};

	//Operations
	//Operation(1)
	static void Srand();

	//Operation(2)
	static int RandomNumber(int from, int to);

	//Operation(3)
	static char RandomCharacter(enCharacterType CharType = enCharacterType::CapitalLetter);

	//Operation(4)
	static std::string GenerateWord(enCharacterType CharType = enCharacterType::CapitalLetter, short Length = 4);

	//Operation(5)
	static std::string GenerateKey(enCharacterType CharType = enCharacterType::CapitalLetter, short KeyLength = 4, short WordLength = 4);
};