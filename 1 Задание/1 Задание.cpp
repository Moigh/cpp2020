#include <iostream>


int main()
{
	std::string s;
	std::cin >> s;

	int i = 1;
	int l1 = 1;
	int l2 = 0;

	while ((s[i] == s[0]) && (i < s.length())) {
		++l1;
		++i;
	}

	if (l1 >= s.length()) {
		std::cout << "not a sandwich";
		return 1;
	}

	while ((s[i] == s[l1]) && (i < s.length())) {
		++i;
	}

	while ((s[i] == s[0]) && (i < s.length())) {
		++i;
		++l2;
	}

	if ((i < s.length())||(l1!=l2)) {
		std::cout << "not a sandwich";
		return 1;
	}else
		std::cout << "sandwich!!";
	return 0;
}
