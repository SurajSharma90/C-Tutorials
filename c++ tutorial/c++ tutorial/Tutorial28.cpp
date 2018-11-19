//#include<iostream>
//#include<ctime>
//
//class Dice
//{
//private:
//	const int value;
//
//public:
//	Dice(int value);
//	virtual ~Dice();
//
//	//Accessor
//	const int& getValue() const;
//
//	//Functions
//	const int toss() const;
//
//};
//
//int main()
//{
//	srand(time(static_cast<unsigned>(0)));
//
//	Dice d6(6);
//	Dice d12(12);
//
//	for (size_t i = 0; i < 6; i++)
//	{
//		std::cout << d12.toss() << "\n";
//	}
//	
//	system("pause");
//	return 0;
//}
//
////Class Dice
//Dice::Dice(int value)
//	: value(value) //Initializer list for class constant member variables and references
//{
//	
//}
//
//Dice::~Dice()
//{
//
//}
//
//const int & Dice::getValue() const
//{
//	return this->value;
//}
//
//const int Dice::toss() const
//{
//	return rand() % this->value + 1;
//}
//
