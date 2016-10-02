#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	int t;

	std::cin >> t;

	while (t--)
	{
		double n;
		std::string v;

		std::cin >> n >> v;

		if (v.length() == 2)
		{

			if (v == "kg")
			{
				n = n * 2.2046;

				std::cout << std::setprecision(4) << std::fixed << n << " " << "lb" << std::endl;
			}
			else 
			{
				n = n * 0.4536;

				std::cout << std::setprecision(4) << std::fixed << n << " " << "kg" << std::endl;
			}
		}
		else
		{
			if (v == "l")
			{
				n = n * 0.2642;

				std::cout << std::setprecision(4) << std::fixed << n << " " << "g" << std::endl;
			}

			else
			{
				n = n * 3.7854;

				std::cout << std::setprecision(4) << std::fixed << n << " " << "l" << std::endl;
			}
		}


	}

}