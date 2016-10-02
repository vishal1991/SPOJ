#include <iostream>
#include <string>

int main()
{
	int x;
	std::cin >> x;

	if (x > 0)
	{
		std::string wow;
		wow += 'W'; 
		for (int i=0; i<x; i++)
		{
			wow += 'o';
		}
		std::cout << wow + 'w';
	}
	return 0;
}