//#include<iostream>
//#include<string>
//#include<vector>
//
//class MyClass
//{
//private:
//	//Variable
//	std::vector<std::string> myStrings;
//
//public:
//	MyClass();
//
//	//Accessors
//	const std::vector<std::string>& getMyStrings() const;
//
//	//Modifiers
//	
//	//Functions
//	void add(const std::string str);
//	const std::string toString() const;
//};
//
////MyClass Function Definitions
//MyClass::MyClass()
//{
//	this->myStrings.push_back("Hi I am nr 1!");
//}
//
//const std::vector<std::string>& MyClass::getMyStrings() const
//{
//	return this->myStrings;
//}
//
//void MyClass::add(const std::string str)
//{
//	this->myStrings.push_back(str);
//}
//
//const std::string MyClass::toString() const
//{
//	std::string str = "";
//	for (size_t i = 0; i < this->myStrings.size(); i++)
//	{
//		str += std::to_string(i) + ": " + this->myStrings[i] + "\n";
//	}
//	return str;
//}
//
//int main()
//{
//	MyClass obj;
//
//	obj.add("Hi I am another string from main!");
//	for (size_t i = 0; i < 10; i++)
//	{
//		obj.add("Hi! I am nr: " + std::to_string(i));
//	}
//	
//	std::cout << obj.toString() << "\n";
//
//	system("PAUSE");
//	return 0;
//}