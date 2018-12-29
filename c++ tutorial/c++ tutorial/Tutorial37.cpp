#include<iostream>
#include<cstdlib>
#include<string>

class Car
{
private:
	std::string name;
	int *horsepower;

public:
	Car(std::string name, int horsepower);
	Car(const Car& obj); //Copy constructor
	~Car();

	//Operators
	//Assignment operator
	void operator= (const Car& obj);	

	const std::string& getName() const;
	const int& getHorsepower() const;
};

int main()
{
	Car car1("Audi A4", 2000);
	//Car car2(car1); //Copy constructor
	Car car2 = car1; //Copy constructor
	Car car3("Toyota CH-R", 50000);

	car2 = car1; //Assignment Operator

	std::cout << car1.getName() << " " << car1.getHorsepower() << "\n";
	std::cout << car2.getName() << " " << car2.getHorsepower() << "\n";
	std::cout << car3.getName() << " " << car3.getHorsepower() << "\n";

	system("pause");
	return 0;
}

Car::Car(std::string name, int horsepower)
{
	this->name = name;
	this->horsepower = new int(horsepower);
}

Car::Car(const Car & obj)
{
	if (this != &obj) //Is not the same object
	{
		this->name = obj.name;
		//this->horsepower = obj.horsepower; //WRONG!! Shallow copy!
		this->horsepower = new int(*obj.horsepower);

		std::cout << "Copy constructor used!" << "\n";
	}
}

Car::~Car()
{
	delete this->horsepower;
}

void Car::operator=(const Car & obj)
{
	if (this != &obj) //Is not the same object
	{
		//Clean old data
		delete this->horsepower;

		//Copy over new data
		this->name = obj.name;
		//this->horsepower = obj.horsepower; //WRONG!! Shallow copy!
		this->horsepower = new int(*obj.horsepower); //Deep copy!

		std::cout << "Overloaded assignment operator used!" << "\n";
	}
} 

const std::string & Car::getName() const
{
	return this->name;
}

const int& Car::getHorsepower() const
{
	return *this->horsepower;
}
