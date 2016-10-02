#include <iostream>


int main(){
	int t = 0;

	std::cin >> t;

	while (t--){
		int l, c, s = 0;
		std::cin >> l >> c >> s;

		int h = 1 + (s+1)*l;
		int w = 1 + (s+1)*c;
		char prev = '\\';
		for (int i=0; i<h; i++){
			for (int j=0; j<w; j++){
				if (i % (s+1) == 0 || j % (s+1) == 0){
					std::cout << "*";
			}
				else if ((i+j) % s == 0){
					std::cout << prev;

					if (j % s == 0)
					{
						if (prev == '/')
						{
							prev = '\\';
						}
						else 
						{
							prev = '/';
						}
					}
					}
				else {
					std::cout << '.';
				}
				}
				std::cout << std::endl;
				}
		std::cout << std::endl;
		}
		return 0;
	}
