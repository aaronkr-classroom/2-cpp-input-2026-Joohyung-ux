#include <iostream>

int main(void) {
	std::cout << "1. Squre OR 2 . Rect? >>>";
	int option;
	std::cin >> option;
	if (option != 1 && option != 2) {
		std::cout << "Error: Only choose 1 or 2! ";
		return 0x712F; // 16진법 
	}
	std::cout << "What size? >>> ";

	int size;
	std::cin >> size; 
	
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				std::cout << "*"; //10x10 네모
			}
			else if (option == 2) {
				std::cout << "**"; //20x10 직사각형
			}
			else {
				std::cout << "Error: Only choose 1 or 2! ";
				return 0x712F; // 16진법(hex)
			}
		}
		//행 끝 줄 바꿈
		std::cout << std::endl;
	}
	return 0;
}