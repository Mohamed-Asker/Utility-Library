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
void clsUtil::Swap(bool& Value1, bool& Value2)
{
	bool tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(12)
void clsUtil::Swap(char& Value1, char& Value2)
{
	char tempValue = Value1;
	Value1 = Value2;
	Value2 = tempValue;
}

//Operation(13)
void clsUtil::ShuffleArray(int Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}

//Operation(14)
void clsUtil::ShuffleArray(std::string Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}

//Operation(15)
void clsUtil::ShuffleArray(double Arr[], int ArrLength)
{
	for (int i = ArrLength - 1; i > 0; i--)
		Swap(Arr[i], Arr[RandomNumber(0, i)]);
}

//Operation(16)
void clsUtil::FillArrayWithRandomNumbers(int Arr[], int ArrLength, int from, int to)
{
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = RandomNumber(from, to);
}

//Operation(17)
void clsUtil::FillArrayWithRandomWords(std::string Arr[], int ArrLength, int WordLength, enCharacterType CharType)
{
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GenerateWord(CharType, WordLength);	
}

//Operation(18)
void clsUtil::FillArrayWithRandomKeys(std::string Arr[], int ArrLength, int KeyLength, int WordLength, enCharacterType CharType)
{
	for (int i = 0; i < ArrLength; i++)
		Arr[i] = GenerateKey(CharType, KeyLength, WordLength);
}

//Operation(19)
std::string clsUtil::Tabs(short NumberOfTabs)
{
	std::string tabs = "";
	for (short i = 1; i <= NumberOfTabs; i++)
		tabs += "\t";
	return tabs;
}

//Operation(20)
std::string clsUtil::EncryptText(std::string text, short EncryptionKey)
{
	for (int i = 0; i < text.length(); i++)
		text[i] = char(text[i] + EncryptionKey);

	return text;
}

//Operation(21)
std::string clsUtil::DecryptText(std::string text, short DecryptionKey)
{
	for (int i = 0; i < text.length(); i++)
		text[i] = char(text[i] - DecryptionKey);

	return text;
}