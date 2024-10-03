#include <iostream>
#include <vector>

#define PRINT(x) std::cout << x;
#define PRINTLINE(x) std::cout << x << "\n";

/*
std::vector<int>& TimesTables(int multiple, int count)
{
	std::vector<int> nums;

	for (int i = 1; i < count + 1; i++)
	{
		std::cout << i * multiple;

		nums.push_back(i);

		if(i == count)
		{
			return nums;
		}

		std::cout << ", ";
	}
}
*/

void Triangle(int Size)
{
	for (int i = 1; i <= Size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			PRINT("*");
		}

		PRINT("\n");
	}
}

using namespace std;

int main()
{
	/*
	std::cout << "Multiple: ";


	int umultiple;
	int count;

	std::cin >> umultiple;

	std::cout << "Count: ";
	std::cin >> count;

	std::vector<int> numbers;
	numbers = TimesTables(umultiple, count);

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i];

		if (i == numbers.size())
		{
			continue;
		}

		std::cout << ", ";
	}
	*/

	Triangle(100);

	return 0;
}