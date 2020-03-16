#include <iostream>
#include <vector> 

int main()
{
    std::cout << "give 5 pos nums\n";
	int x;
	int min;
	std::cin >> min;

	for (int i = 1; i < 5; ++i) {
		std::cin >> x;
		if (x < 0) {
			std::cout << "you wrote neg num\n";
			return 1;
		}
		if (x < min) {
			min = x;
		}
	}
	std::cout << "your min is " << min;
}