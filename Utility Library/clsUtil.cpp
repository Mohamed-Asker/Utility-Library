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

//Operation(6)
void clsUtil::GenerateKeys(short NumberOfKeys, enCharacterType CharType, short KeyLength, short WordLength)
{
	for (short i = 1; i <= NumberOfKeys; i++)
		std::cout << "Key [" << i << "]: " << GenerateKey(CharType, KeyLength, WordLength) << "\n";
}

//Operation(7)
void clsUtil::Swap(int& Value1, int& Value2)
{
	int tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(8)
void clsUtil::Swap(std::string& Value1, std::string& Value2)
{
	std::string tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(9)
void clsUtil::Swap(double& Value1, double& Value2)
{
	double tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(10)
void clsUtil::Swap(clsDate& Value1, clsDate& Value2)
{
	clsDate tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(11)
void clsUtil::ShuffleArray(int Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}

//Operation(12)
void clsUtil::ShuffleArray(std::string Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}

//Operation(13)
void clsUtil::ShuffleArray(double Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}
