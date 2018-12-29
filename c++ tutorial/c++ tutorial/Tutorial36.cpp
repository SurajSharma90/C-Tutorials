//#include<iostream>
//#include<cstdlib>
//#include<string>
//
//class Car
//{
//private:
//	std::string name;
//	int *horsepower;
//
//public:
//	Car(std::string name, int horsepower);
//	Car(const Car& obj); //Copy constructor
//
//	~Car();
//
//	const std::string& getName() const;
//	const int& getHorsepower() const;
//};
//
//int main()
//{
//	Car car1("Audi A4", 2000);
//	Car car2(car1); //Copy constructor
//	//Car car2 = car1; //Copy construcor
//
//	car2 = car1; //Assignment Operator
//
//	std::cout << car1.getName() << " " << car1.getHorsepower() << "\n";
//	std::cout << car2.getName() << " " << car2.getHorsepower() << "\n";
//
//	system("pause");
//	return 0;
//}
//
//Car::Car(std::string name, int horsepower)
//{
//	this->name = name;
//	this->horsepower = new int(horsepower);
//}
//
//Car::Car(const Car & obj)
//{
//	this->name = obj.name;
//	this->horsepower = new int(*obj.horsepower);
//}
//
//Car::~Car()
//{
//	delete this->horsepower;
//}
//
//const std::string & Car::getName() const
//{
//	return this->name;
//}
//
//const int& Car::getHorsepower() const
//{
//	return *this->horsepower;
//}
