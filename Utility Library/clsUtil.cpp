#include <iostream>
#include "clsUtil.h"




//Helpers Functions
char clsUtil::getSpecialCharacter()
{
	std::string SpecialCharacter = "!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/~`";
	return SpecialCharacter[RandomNumber(0, SpecialCharacter.length() - 1)];
}

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
		return getSpecialCharacter();
		break;
	}
	default:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	}
}

//Operation(4)
std::string clsUtil::GenerateWord(enCharacterType CharType, short Length)
{
	std::string word = "";
	for (short i = 1; i <= Length; i++)
		word += RandomCharacter(CharType);
	return word;
}

//Operation(5)
std::string clsUtil::GenerateKey(enCharacterType CharType, short KeyLength, short WordLength)
{
	std::string key = "";
	for (int i = 1; i <= KeyLength; i++)
		key += (GenerateWord(CharType, WordLength) + "-");
	return key.substr(0, key.length() - 1);
}