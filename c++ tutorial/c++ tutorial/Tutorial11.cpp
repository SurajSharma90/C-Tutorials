//#include<iostream>
//#include<fstream>
//#include<string>
//
//int main()
//{
//	const char* fileName = "myFile.txt";
//
//	std::ifstream inFile(fileName);
//
//	std::string name = "";
//	int age = 0;
//	std::string bloodType = "";
//	std::string street = "";
//	std::string catName = "";
//	double height = 0;
//
//	if (inFile.is_open())
//	{
//		while (!inFile.eof())
//		{
//			std::getline(inFile, name);
//			
//			inFile >> age;
//			inFile.ignore();
//
//			std::getline(inFile, bloodType);
//			
//			std::getline(inFile, street);
//			
//			std::getline(inFile, catName);
//			
//			inFile >> height;
//			inFile.ignore();
//
//			std::cout << name << "\n" << age << "\n" << bloodType << "\n" << street << "\n" << catName << "\n" << height << "\n\n";
//		}
//	}
//	else
//		std::cout << "COULD NOT OPEN FILE: " << fileName << "\n";
//
//	inFile.close(); //DO NOT FORGET TO CLOSE FILE!!
//
//	system("PAUSE");
//	return 0;
//}