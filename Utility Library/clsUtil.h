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

	//Operation(6)
	static void GenerateKeys(short NumberOfKeys, enCharacterType CharType = enCharacterType::CapitalLetter, short KeyLength = 4, short WordLength = 4);
	
	//Operation(7)
	static void Swap(int& Value1, int& Value2);

	//Operation(8)
	static void Swap(std::string& Value1, std::string& Value2);

	//Operation(9)
	static void Swap(double& Value1, double& Value2);

	//Operation(10)
	static void Swap(clsDate& Value1, clsDate& Value2);

	//Operation(11)
	static void Swap(bool& Value1, bool& Value2);

	//Operation(12)
	static void Swap(char& Value1, char& Value2);

	//Operation(13)
	static void ShuffleArray(int Arr[], int ArrLength);

	//Operation(14)
	static void ShuffleArray(std::string Arr[],int ArrLength);

	//Operation(15)
	static void ShuffleArray(double Arr[], int ArrLength);

	//Operation(16)
	static void FillArrayWithRandomNumbers(int Arr[], int ArrLength, int from = 1, int to = 10);

	//Operation(17)
	static void FillArrayWithRandomWords(std::string Arr[], int ArrLength, int WordLength = 4, enCharacterType CharType = enCharacterType::CapitalLetter);

	//Operation(18)
	static void FillArrayWithRandomKeys(std::string Arr[], int ArrLength, int KeyLength = 4, int WordLength = 4, enCharacterType CharType = enCharacterType::CapitalLetter);

	//Operation(19)
	static std::string Tabs(short NumberOfTabs = 1);

	//Operation(20)
	static std::string EncryptText(std::string text, short EncryptKey = 1);

	//Operation(21)
	static std::string DecryptText(std::string text, short DecryptKey = 1);

};
