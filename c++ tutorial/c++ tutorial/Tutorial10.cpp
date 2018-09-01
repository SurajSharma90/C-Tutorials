//#include<iostream>
//#include<fstream>
//#include<string>
//
////OUTPUT TO FILE
////IF FILE DOES NOT EXIST WITH A CERTAIN NAME, IT WILL BE CREATED
////TEXT OR BINARY (FASTER)
////FILE-TYPE DOES NOT REALLY MATTER, IT WILL BE TEXT ANYWAY
////FLAGS (LATER)
////BE CAREFUL WITH OPENING FILES AND SAVING STUFF
////BE CAREFUL WITH WHILE LOOPS!!!
//
//int main()
//{
//	std::string name = "Daniel";
//	int age = 23;
//	std::string address = "Somestreet 23 65456 Somecountry";
//	double height = 1.75;
//	std::string catName = "Bob";
//
//	std::string fileName = "personDatabase.save";
//
//	std::ofstream outFile;
//
//	outFile.open(fileName.c_str());
//
//	if (outFile.is_open())
//	{
//		outFile << "Name: " << name
//			<< "\n"
//			<< age
//			<< "\n"
//			<< address
//			<< "\n"
//			<< height
//			<< "\n"
//			<< catName
//			<< "\n";
//	}
//
//	outFile.close(); //DÒ NOT FORGET THE CLOSE!!!!
//
//	system("PAUSE");
//	return 0;
//}