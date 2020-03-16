#include <iostream>

int main()
{
    std::cout << "write a month number\n";
	int month;
	std::cin >> month;

	if (month < 1) {
		std::cout << "inwalid month";
		return 1;
	}
	if ((month < 2) || (month == 12))
		std::cout << "winter";
	else if (month < 6)
		std::cout << "spring";
	else if (month < 9)
		std::cout << "summer";
	else if (month < 12)
		std::cout << "autumn";
	else
		std::cout << "inwalid month";
	return 0;
}