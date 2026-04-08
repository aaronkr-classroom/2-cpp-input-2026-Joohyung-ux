#include <iostream>
#include <string>

int main(void) {
	std::cout << "input number1: ";
	std::string number1;
	std::cin >> number1;
	std::cout << "input number2: ";
	std::string number2;
	std::cin >> number2;
	if (number1 > number2) {
		std::cout << number1 << " is bigger than " << number2 << std::endl;
	} else if (number1 < number2) {
		std::cout << number2 << " is bigger than " << number1 << std::endl;
	}
	else {
		std::cout << "two numbers are same" << std::endl;
	}

	return 0;
}