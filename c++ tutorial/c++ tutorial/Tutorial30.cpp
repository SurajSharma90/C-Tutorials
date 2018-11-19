//#include <iostream>
//#include <iomanip>
//
//template <typename T>
//void getChoice(T& choice)
//{
//	std::cout << "- Enter Choice: ";
//	std::cin >> std::setw(1) >> choice;
//
//	//Error check
//	while (!std::cin.good())
//	{
//		//Report problem
//		std::cout << "ERROR: Faulty input! Try again..." << "\n";
//
//		//Clear stream
//		std::cin.clear();
//		std::cin.ignore(INT_MAX, '\n');
//
//		//Get input again..
//		std::cout << "- Enter Choice: ";
//		std::cin >> std::setw(1) >> choice;
//	}
//
//	//Clear stream
//	std::cin.clear();
//	std::cin.ignore(INT_MAX, '\n');
//}
//
//int main()
//{
//	int choice = -1;
//	
//	getChoice(choice);
//
//	while (choice > 0) //Menu
//	{
//		switch (choice)
//		{
//		case 1:
//			std::cout << "Option ONE" << "\n";
//			break;
//		case 2:
//			std::cout << "Option TWO" << "\n";
//			break;
//		case 3:
//			std::cout << "Option THREE" << "\n";
//			break;
//		default:
//			std::cout << "No such option!" << "\n";
//			break;
//		}
//
//		getChoice(choice);
//	}
//
//	std::cout << "Quitting..." << "\n";
//
//	system("pause");
//	return 0;
//}