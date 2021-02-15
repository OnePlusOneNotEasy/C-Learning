#include<iostream>

int main()
{
	// int value = 2;
	// int pow = 10;
	// int result = 1;
	// for(int cnt = 0; cnt != pow; ++cnt)
	// 	result *= value;
	// std::cout << value
	//           << " raised to the power of "
	//           << pow << ":\t"
	//           << result << std::endl;

	//exercise 2.11
	int base, exponent;
	std::cin >> base >> exponent;
	int result = 1;
	for(int cnt = 0; cnt != exponent; ++cnt)
	    result *= base;
	std::cout << base
	          << " raised to the power of "
	          << exponent << ":\t"
	          << result << std::endl;
	return 0;
}
