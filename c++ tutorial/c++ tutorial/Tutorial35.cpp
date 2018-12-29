///*
//Tutorial: Deep copy vs. shallow copy
//*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	int *intptr1 = new int(50);
//	int *intptr2 = new int(30);
//
//	//Shallow copy
//	//intptr1 = intptr2; ////Creates memory leak!
//
//	//Deep copy (safe!)
//	*intptr1 = *intptr2;
//
//	num1 = num2;
//
//	cout << num1 << "\n";
//
//
//	delete intptr1;
//	delete intptr2;
//
//	system("pause");
//	return 0;
//}