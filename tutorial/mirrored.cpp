#include <iostream>

int main()
{
	char arr[100];

	std::cin.getline(arr, sizeof(arr));

	std::cout << "Ready" << std::endl;

	while (arr[0] != ' ' && arr[1] != ' ')
	{
		if ((arr[0] == ' ') && (arr[1] == ' '))
		{
			break;
		}

		if ((arr[0] == 'p' && arr[1] == 'q') || (arr[0] == 'q' && arr[1] == 'p') || (arr[0] == 'd' && arr[1] == 'b') || (arr[0] == 'b' && arr[1] == 'd'))
		{
			std::cout << "Mirrored pair" << std::endl;
		}
		else
		{
			std::cout << "Ordinary pair" << std::endl;
		}

		std::cin.getline(arr, sizeof(arr));
	}
	return 0;
}