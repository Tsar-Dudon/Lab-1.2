#include <iostream>

int main()
{
	long long a, b, c;
	std::cout << "Enter A: ";
	std::cin >> a;
	if ((a < 0) || (a > 10000))
	{
		std::cout <<"Incorrect A" << std::endl;
	}
	else
	{
		std::cout << "Enter B: ";
		std::cin >> b;
		if ((b < 0) || (b > 10000))
		{
			std::cout <<"Incorrect B" << std::endl;
		}
		else
		{
			std::cout << "Enter C: ";
			std::cin >> c;
			if ((c < 0) || (c > 10000))
			{
				std::cout << "Incorrect C" << std::endl;
			}
			else
			{
				std::cout << "Volume: " << (a * b * c) << std::endl;
			}
		}
	}

	return 0;
}