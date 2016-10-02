#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);

	int n, k;

	std::cin >> n >> k;
	int count = 0;
	while (n--)
	{
		int t;
		std::cin >> t;
		if ( t % k == 0)
		{
			count += 1;
		}
	}
	std::cout << count; 
}