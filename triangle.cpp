#include <iostream>

int main(void) {

	std::cout << "What size triangle? >>> ";

	int size;
	std::cin >> size;

	/*
	*************
	 ***********
	  *********
	   ******
	*/

	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < i; j++) {

			std::cout << " ";

		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			std::cout << "*";
		}

		//행 끝 줄 바꿈
		std::cout << std::endl;
	}
	return 0;
}