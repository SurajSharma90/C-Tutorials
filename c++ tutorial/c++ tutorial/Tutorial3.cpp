#include<iostream>
#include<string>

int main()
{
	std::string sentence = "";
	int i = 0;
	int a = 0;
	float f = 0.0;

	std::cout << "Enter two numbers: ";
	std::cin >> i >> a >> f;
	std::cout << "Your numbers are: " << i << " " << a << " " << f <<  "\n";
	std::cin.ignore();

	std::cout << "Please enter a cool sentence bro/sis/or inbetween: " << "\n";
	std::getline(std::cin, sentence);

	std::cout << sentence << "\n";

	system("PAUSE");
	return 0;
}