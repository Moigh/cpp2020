#include <iostream>

int main()
{
	int x, n, min;
	std::cout << "how much nums?\n";
	std::cin >> n;
	std::cout << "write pos nums\n";
	std::cin >> min;

	for (int i = 1; i < n; ++i) {
		std::cin >> x;
		if (x < 0) {
			std::cout << "neg nums are not allowed\n";
			return 1;
		}
		if (x < min) {
			min = x;
		}
	}
	std::cout << "min is " << min;
}