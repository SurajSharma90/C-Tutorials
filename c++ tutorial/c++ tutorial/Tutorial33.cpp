#include<iostream>
#include<ctime>
#include<vector>

int main()
{
	//Initialize
	std::vector<int> intarr(10000000, 1);
	int sum = 0;

	//Optimization of loops
	int start_t = clock();

	//Normal loop (avg: 0.06 ms)
	//for (size_t i = 0; i < intarr.size(); i++)
	//{
	//	sum += intarr[i];
	//}

	//C++ 11 foreach loop (0.001)
	//for (auto &i : intarr)
	//	sum += i;

	//Iterator range loop (0.02)
	const std::vector<int>::const_iterator end = cend(intarr); //iterator caching
	for (std::vector<int>::const_iterator it = cbegin(intarr); it != end; ++it)
	{
		sum += *it;
	}

	int end_t = clock();

	std::cout << "Time: " << (end_t - start_t) / double(CLOCKS_PER_SEC) << "\n";
	std::cout << "Sum: " << sum << "\n";

	system("pause");
	return 0;
}