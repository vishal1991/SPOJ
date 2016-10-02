#include <iostream>

int main()
{
	int n1,n2;
	int sum1 = 0;
	std::cin >> n1;

	int p[n1];

	for (int i=0; i<n1; i++)
	{
		std::cin >> p[i];
		sum1 += p[i];
	}

	std::cin >> n2;
	int q[n2];
	int sum2=0;
	for (int j=0; j<n2; j++)
	{
		std::cin >> q[j];
		sum2 += q[j];
	}

	if (sum1 > sum2)
	{
		for(int k=0; k<n1; k++)
			std::cout << p[k] << ' ';
	}
	else
	{
		for (int m=0;m<n2;m++)
			std::cout << q[m] << ' ';
	}

}