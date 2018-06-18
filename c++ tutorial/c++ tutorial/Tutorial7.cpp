#include<iostream>

int main()
{
	//keyword (iterator name and start value ; condition ; iterator increment)
	for (int i = 0; i < 7; i++)
	{
		for (int k = 0; k < 7; k++)
		{
			std::cout << i << " " << k << "\n";
		}
	}

	system("PAUSE");
	return 0;
}