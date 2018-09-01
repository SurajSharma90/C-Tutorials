//#include<iostream>
//#include<string>
//
//int main()
//{
//	const int arraySize = 12;
//	int myArray[arraySize] = { 0 }; //INITIALIZED ARRAY
//	
//	myArray[4] = 23;
//	myArray[5] = 100;
//	myArray[9] = myArray[4] * myArray[5];
//	
//	for (size_t i = 0; i < arraySize; i++)
//	{
//		std::cout << i << " " << myArray[i] << "\n";
//	}
//
//	std::cout << "\n";
//
//	const int arraySizeStrings = 3;
//	std::string myStringArray[arraySizeStrings] = { "NONE" };
//
//	for (size_t i = 0; i < arraySizeStrings; i++)
//	{
//		std::cout << i << " Enter a name: ";
//		std::getline(std::cin, myStringArray[i]);
//	}
//
//	for (size_t i = 0; i < arraySizeStrings; i++)
//	{
//		std::cout << i << " " << myStringArray[i] << "\n";
//	}
//
//	system("PAUSE");
//	return 0;
//}