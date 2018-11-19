//#include<iostream>
//#include<string>
//#include<sstream>
//#include<ctime>
//
//class Person
//{
//private:
//	std::string name;
//	int age;
//
//public:
//	Person(std::string name = "EMPTY", int age = -1)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	~Person() 
//	{
//
//	}
//
//	//Accessors
//
//	//Functions
//	const std::string toString() const
//	{
//		std::stringstream ss;
//
//		ss << "Name: " << this->name << " | Age: " << this->age << "\n";
//
//		return ss.str();
//	}
//};
//
//int main()
//{
//	srand(time(NULL));
//
//	Person me("Suraj", 28);
//	Person fr("Daniel", 26);
//
//	Person* seat = nullptr;
//
//	if (rand() % 2 > 0)
//		seat = &me;
//	else
//		seat = &fr;
//
//	std::cout << seat->toString();
//
//	//==========================================
//
//	Person* newPerson = new Person("Dude", 50);
//
//	std::cout << newPerson->toString();
//
//	delete newPerson;
//
//	//==========================================
//
//	Person **pArr = new Person*[5];
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		pArr[i] = new Person("SomeDude", i);
//	}
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		std::cout << pArr[i]->toString();
//	}
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		delete pArr[i];
//	}
//
//	delete[] pArr;
//
//	//==========================================
//
//	system("pause");
//
//	return 0;
//}