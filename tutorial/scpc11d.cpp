#include <iostream>
#include <cmath>

int main()
{
	long a, b, c;
	std::cin >> a >> b >> c;

	while (a != 0 && b != 0 && c!=0)
	{
		int f = 0;

		if (c >= a && c >= b)
		{
			if(c*c == a*a + b*b)
				f=1;
		}

		else if(b >= a && b >= c)
		{
			if (b*b == a*a + c*c)
				f=1;
		}

		else
		{
			if (a*a == b*b + c*c)
				f=1;
		}

		if(f)
			std::cout << "right" << std::endl;
		else
			std::cout << "wrong" << std::endl;

		std::cin >> a >> b >> c;
	}

	return 0;

}