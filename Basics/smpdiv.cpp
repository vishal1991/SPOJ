#include <iostream>

int main()
{
	int t =0;
	std::cin >> t;

	while (t--)
	{
		int n, x ,y;
		std::cin >> n >> x >> y;

		for (int i=1; i<n; i++)
		{
			if (i%x == 0 && i%y != 0)
			{
				std::cout << i << ' ';
			}
		}
		std::cout << std::endl;

	}
}