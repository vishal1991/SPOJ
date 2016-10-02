#include <iostream>
#include <cmath>
int main()
{
	int t;
	std::cin >> t;

	while (t--)

	{
		int n;
		std::cin >> n;
		if (n == 1)
		{
			std::cout << '0' << std::endl;
		}

		else
		{

			long long sum = 0;
			int sqrt;
			sqrt = std::sqrt(n);

			for (int i=2; i<=sqrt; i++)
			{
				if (n % i == 0)
				{
					if (i == n/i)
					{
						sum += i;
					}
					else
					{
						sum += i + n/i;
					}
				}
			}
			sum ++;
			std::cout << sum << std::endl;
		}
	}
}