#include<iostream>

//Function PROTOTYPE
//Function HEADER: Return-type, Name, input parameters

void myFunc1(); //PROTOTYPE
void myFunc2(); //PROTOTYPE
float myDivisionFunc(float a, float b); //PROTOTYPE

int main()
{
	myFunc1();
	myFunc2();

	std::cout << myDivisionFunc(10.f, 2.f) << "\n";

	system("PAUSE");
	return 0;
}

void myFunc1() //DEFINITION
{
	std::cout << "HELLO FROM MYFUNC1" << "\n";
}

void myFunc2() //DEFINITION
{
	std::cout << "HELLO FROM MYFUNC2" << "\n";
}

float myDivisionFunc(float a, float b) //DEFINITION
{
	if (b == 0)
	{	
		std::cout << "DIV BY 0! ILLEGAL OPERATION!" << "\n";
		return 0.f; //EXITS FUNCTION
	}

	return a / b; //EXITS FUNCTION
}