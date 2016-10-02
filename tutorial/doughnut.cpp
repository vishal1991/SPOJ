#include <iostream>

int main()
{
	int t;
	std::cin >> t;

	while (t--)
	{
		int c, w, k;

		std::cin >> c >> w >> k;

		if (c*k <= w)
		{
			std::cout << "yes" << std::endl;
		}

		else
		{
			std::cout << "no" << std::endl;
		}
	}

	return 0;
}