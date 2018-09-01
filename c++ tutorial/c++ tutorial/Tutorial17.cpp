//#include<iostream>
//#include<string>
//
////REFERENCE PARAMETERS
////PASS BY VALUE
////PASS BY REFERENCE
//
//void changeNameOfCharacter_VAL(std::string name) //PASS BY VALUE
//{
//	/*
//		Function will change the "name" variable (BY VALUE).
//	*/
//
//	name = "DANIEL";
//}
//
//void changeNameOfCharacter_REF(std::string &name_to_change, std::string name) //PASS BY REFERENCE
//{
//	/*
//	Function will change the "name" variable (BY REFERENCE).
//	*/
//
//	name_to_change = name;
//}
//
//void incrementEXP(int &exp, int level)
//{
//	exp += 20 + level * 2 - 3;
//}
//
//int main()
//{
//	int level = 10;
//	int exp = 0;
//
//	std::cout << exp << "\n";
//
//	incrementEXP(exp, level);
//
//	std::cout << exp << "\n";
//
//
//	std::string characterName = "SURAJ";
//	std::string myName = "ERICA";
//
//	//changeNameOfCharacter_VAL(characterName);
//
//	changeNameOfCharacter_REF(characterName, "ERIK");
//	changeNameOfCharacter_REF(myName, characterName);
//
//	std::cout << characterName << "\n";
//	std::cout << myName << "\n";
//
//	system("PAUSE");
//	return 0;
//}