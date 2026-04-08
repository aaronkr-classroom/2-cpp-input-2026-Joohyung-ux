#include <iostream>
#include <string>

int main(void) {
	// [1,10) 범위의 정수(1..9)의 곱을 계산
	int result = 1;
	for (int i = 1; i < 10; ++i) {
		result *= i;
	}
	std::cout << result << std::endl;

	return 0;
}