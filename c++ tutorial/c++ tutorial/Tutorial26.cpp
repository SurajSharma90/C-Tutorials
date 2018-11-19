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
//	inline const std::string& getName() const { return this->name; }
//	inline const int& getAge() const { return this->age; }
//	inline const bool& getFemale() const { return this->female; }
//	inline const std::string& getAddress() const { return this->address; }
//	inline const std::string& getProfession() const { return this->profession; }
//	inline const bool& getStd() const { return this->std; }
//
//	//modifier
//	inline void setName(const std::string& name) { this->name = name; }
//	inline void setAge(const int& age) { this->age = age; }
//
//	//functions
//	const std::string toString() const
//	{
//		std::string finalString = "";
//
//		finalString = 
//			"Name: " + this->name + " | " +
//			"Age: " + std::to_string(this->age) + " | " +
//			"Female/Male: " + std::to_string(this->female) + " | " +
//			"Address: " + this->address + " | " +
//			"Profession: " + this->profession + " | " +
//			"STD? :( : " + std::to_string(this->std) + "\n";
//
//		return finalString;
//	}
//};
//
//int main()
//{
//	Person p1("Suraj", 28, false, "Somewhere 24", "Youtube/Mentor/Professional person", false);
//	Person p2;
//
//	std::cout << p1.getName() << "\n";
//	std::cout << p2.getName() << "\n";
//
//	p1.setName("Daniel");
//
//	std::cout << p1.getName() << "\n";
//
//	std::cout << p1.toString() << "\n";
//
//	system("PAUSE");
//
//	std::cout << "Hello from end of program!" << "\n";
//	return 0;
//}