#include <iostream>

int bs(int target,int arr[], int min, int max)
{

		if (max < min)
		{
			return -1;
		}

		else 
		{
			int mid;
			mid = (max + min)/2;

			if (arr[mid] == target)
			{
				return 1;
			} 

			else if (arr[mid] < target)
			{
				return bs(target, arr, min = mid + 1, max);
			}

			else
			{
				return bs(target, arr,min,max = mid -1);
			}
		}	
	
}


int main()
{
	int n1,n2;

	std::cin >> n1;

	int p[n1];

	for (int i=0; i<n1; i++)
	{
		std::cin >> p[i];
	}

	std::cin >> n2;
	int q[n2];

	for (int j=0; j<n2; j++)
	{
		std::cin >> q[j];
	}

	int min = 0;
	int max = n2-1;
	
	for (int k=0; k<sizeof(p)/sizeof(p[0]); k++)
	{
		if (bs(p[k], q, min,max) == -1)
			std::cout << p[k] << ' ';
	}

	int mini = 0;
	int maxi = n1-1;
	for (int l=0; l<sizeof(q)/sizeof(q[0]); l++)
	{
		if (bs(q[l], p, mini,maxi) == -1)
			std::cout << q[l] << ' ';
	}

	std::cout << std::endl;
	return 0;

}