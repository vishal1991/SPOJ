#include <iostream>

int main()
{
	int t = 0;
	std::cin >> t;

	while(t--)
	{
		int l,c,h,w;

		std::cin >> l >> c >> h >> w;

		int th = 0;
		int tw = 0;

		th = l + (h*(l+1));
		tw =  c + (c+1)*w;

		for (int i=1; i<=th; i++)
		{
			for (int j=1; j<=tw; j++)
			{
				if (i % (h+1) == 0 && j % (w+1) == 0)
				{
					std::cout << '+';
				}
				else if (i % (h+1) == 0)
				{
					std::cout << '-';
				}
				else if (j % (w+1) == 0)
				{
					std::cout << '|';
				}
				else
				{
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}