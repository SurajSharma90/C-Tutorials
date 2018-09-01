//#include<iostream>
//#include<string>
//#include<vector>
//
//int main()
//{
//	std::vector<int> myIntVec;
//	
//	myIntVec.push_back(23);
//	myIntVec.push_back(2);
//	myIntVec.push_back(434);
//	myIntVec.push_back(565);
//
//	//myIntVec.clear();
//
//	std::vector<std::string> myStrVec;
//
//	myStrVec.push_back("Suraj");
//	myStrVec.push_back("Bob");
//
//	myStrVec.erase(myStrVec.begin() + 0);
//	//myStrVec.erase(myStrVec.end() - 1);
//
//	//Remove certain element at an unknown position if it exists
//	int integerToRemove = 43;
//	bool found = false;
//
//	for (size_t i = 0; i < myIntVec.size() && found == false; i++)
//	{
//		if (myIntVec[i] == integerToRemove)
//		{
//			myIntVec.erase(myIntVec.begin() + i);
//			found = true;
//			std::cout << integerToRemove << " has been erased!" << "\n";
//		}
//	}
//
//	if (found == false)
//		std::cout << integerToRemove << " was not found in myIntArr!" << "\n";
//
//	std::cout << "\n";
//
//	for (size_t i = 0; i < myIntVec.size(); i++)
//	{
//		std::cout << myIntVec[i] << " ";
//	}
//
//	std::cout << "\n";
//
//	for (size_t i = 0; i < myStrVec.size(); i++)
//	{
//		std::cout << myStrVec[i] << " ";
//	}
//
//	std::cout << "\n";
//
//	std::cout << "Size of myIntVec: " << myIntVec.size() << "\n";
//	std::cout << "Size of myStrVec: " << myStrVec.size() << "\n";
//
//	system("PAUSE");
//	return 0;
//}