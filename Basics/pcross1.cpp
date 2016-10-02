#include <iostream>
int main()
{
	int t = 0;
	std::cin >> t;

	while (t--)
	{
		int m, n, ci, cj;

		std::cin >> m >> n >> ci >> cj;

		for (int i=1; i<=m; i++)
		{
			for (int j=1; j<=n; j++)
			{
				if (i == ci || j == cj)
				{
					std::cout << '*';
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
	return 0;
}