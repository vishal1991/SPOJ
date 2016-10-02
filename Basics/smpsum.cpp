#include <iostream>

int sum(int a,int b)
{
	if (b>=a)
	{
		return b*b + sum(a, b-1);
	}
	return 0;
}

int main()
{
	int a,b;
	std::cin >> a >> b;

	std::cout << sum(a,b);
}