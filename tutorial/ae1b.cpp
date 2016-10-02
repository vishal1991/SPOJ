#include <iostream>

int swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}

int sort(int a[],int t)
{
	int temp;
	for (int i=0; i<t; i++)
	{
		for (int j=0; j<i;j++)
		{
			if (a[i] < a[i+1])
			{
				swap(a[i], a[i+1]);		
			}
		}
	}
	return a;
}


int main()
{
	int n,k,s;
	std::cin >> n >> k >> s;
	
	int total;
	total = k*s;
	
	int count = 0;

	int a[1000];

	for (int i=0; i<n; i++)
	{
		std::cin >> a[i];
	}
	a = sort (a,n);
	
	for (int c =0; c< n; c++)
	{
		if (total > 0)
		{
			total = total - a[c];
			count ++;
			std::cout << a[c];
		} 
		else
			break;
	}
	std::cout << count;
}