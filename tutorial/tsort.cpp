#include <iostream>

int main()
{
	int t;

	std::cin >> t;

	int arr[t];

	for (int i=0; i<t; i++)
	{
		std::cin >> arr[i];
	}

	for (int j=0; j<t; j++)
	{
		for (int k=0; k<t; k++)
		{
			if (arr[k] > arr[k+1])
			{
				int temp;
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}

	for (int l=0; l<t; l++)
	{
		std::cout << arr[l] << std::endl;
	}
	return 0;
}