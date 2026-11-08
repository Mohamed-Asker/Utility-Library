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

//Operation(3)
char clsUtil::RandomCharacter(enCharacterType CharType)
{
	if (CharType == enCharacterType::MixChars)
		CharType = enCharacterType(RandomNumber(1, 3));

	switch (CharType)
	{
	case enCharacterType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}

	case enCharacterType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}

	case enCharacterType::DigitLetter:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	case enCharacterType::SpecialLetter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	default:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	}
}