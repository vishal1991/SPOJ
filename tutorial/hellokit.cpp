#include <iostream>
#include <string>

int main()
{
	int n;
	std::string str;

	str = "";
	while (str !=  ".")
	{	
		std::cin >> str >> n;

		std::string t;

		for (int i=1; i<=n; i++)
		{
			t = t + str;
		}

		int l;
		l = t.length();
		int num;
		num = str.length();

		std::string slice;

		for (int j=0; j<num; j++)
		{
			slice = t.substr(j,l) + t.substr(0,j);
			std::cout << slice << std::endl;
		}
	}
}