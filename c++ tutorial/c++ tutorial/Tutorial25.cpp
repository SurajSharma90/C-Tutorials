//#include<iostream>
//#include<string>
//#include<vector>
//
///*
//Syntax:
//keyword(class) class-name
//{
//private:
//private members
//private functions
//
//public:
//constructor
//destructor
//public members
//public member-functions
//}
//*/
//
//class Person
//{
//private:
//	//variables
//	std::string name;
//	int age;
//	bool female;
//	std::string address;
//	std::string profession;
//	bool std;
//
//	//functions
//
//public:
//	//constructors and destructors
//	Person()
//	{	
//		std::cout << "I am the default constructor!" << "\n";
//
//		this->name = "none";
//		this->age = -1;
//		this->female = false;
//		this->address = "none";
//		this->profession = "none";
//		this->std = false;
//	}
//
//	Person(std::string name, int age, bool female, std::string address, std::string profession, bool std)
//	{
//		std::cout << "I am the specialized constructor!" << "\n";
//
//		this->name = name;
//		this->age = age;
//		this->female = female;
//		this->address = address;
//		this->profession = profession;
//		this->std = std;
//	}
//
//	~Person()
//	{
//		std::cout << "Hello and goodbye from the destructor!" << "\n";
//	}
//
//	//accessors
//
//	//modifier
//
//	//functions
//};
//
//int main()
//{
//	Person p1("Suraj", 28, false, "Somewhere 24", "Youtube/Mentor/Professional person", false);
//	Person p2;
//	
//	system("PAUSE");
//
//	std::cout << "Hello from end of program!" << "\n";
//	return 0;
//}