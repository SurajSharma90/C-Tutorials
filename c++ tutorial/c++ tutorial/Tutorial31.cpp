//#include<iostream>
//#include<string>
//
//class Car
//{
//private:
//	class Wheel
//	{
//	public:
//		int pressure;
//
//		Wheel(int pressure) { this->pressure = pressure; };
//		~Wheel() {};
//	};
//
//	Wheel tl;
//	Wheel tr;
//	Wheel bl;
//	Wheel br;
//
//public:
//	Car() :
//		tl(1), tr(2), bl(3), br(4)
//	{
//
//	};
//
//	~Car() {};
//
//	void printWheels()
//	{
//		std::cout << "Wheels: \n"
//			<< "TOP LEFT: " << tl.pressure << "\n"
//			<< "TOP RIGHT: " << tr.pressure << "\n"
//			<< "BOTTOM LEFT: " << bl.pressure << "\n"
//			<< "BOTTOM RIGHT: " << br.pressure << "\n"
//			<< "\n";
//	}
//};
//
//int main()
//{
//	Car car1;
//
//	car1.printWheels();
//	
//	system("pause");
//
//	return 0;
//}