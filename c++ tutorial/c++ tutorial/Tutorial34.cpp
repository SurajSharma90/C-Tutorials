//#include<iostream>
//#include<string>
//#include"Dice.h"
//
//using namespace std;
//
//class Person
//{
//private:
//	std::string name;
//	int age;
//	int id;
//
//	//Static variables
//	static int ID;
//
//public:
//	Person(std::string name = "EMPTY", int age = -1)
//	{
//		this->name = name;
//		this->age = age;
//
//		Person::ID++;
//		this->id = Person::ID;
//	}
//
//	~Person() {}
//
//	//Accessors
//
//	//Functions
//
//	//Static functions
//	int getID()
//	{
//		return this->id;
//	}
//
//	static int getStaticID()
//	{
//		return Person::ID;
//	}
//};
//
////Initialize static variables for class Person
//int Person::ID = 0;
//
////Functions
//static void print(int i)
//{
//	cout << "Hello World!" << i << "\n";
//}
//
//static void print(char c)
//{
//	cout << "Hello World!" << c <<"\n";
//}
//
////Main
//int main()
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		static int number = 20;
//		number++;
//
//		cout << number << "\n";
//	}
//
//	print(20);
//	print('f');
//
//	Person person1;
//	cout << person1.getID() << "\n";
//
//	Person person2;
//	cout << person2.getID() << "\n";
//
//	Person person3;
//	cout << person3.getID() << "\n";
//
//	cout << Person::getStaticID() << "\n";
//
//	system("pause");
//	return 0;
//}