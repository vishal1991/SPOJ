#include <iostream>

int main()
{
	int t;

	std::cin >> t;
	while (t--)
	{

		int n, a, d;

		std::cin >> n >> a >> d;
		
		int sum = 0;
		int total = 0;

		sum += a;
		total += sum;
		
		n-=1;

		while(n--)
		{
			sum += d;
			total += sum;
		}

		std::cout << total << std::endl;



	}
}