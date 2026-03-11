//name2.cpp 어려운데?
#include <iostream>
#include <string>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::cout;
using std::endl; using std::string;

int main(void) 
{
	//이름을 물음
	std::cout << "Please enter yout first name: ";
	//이름을 읽어 들임
	std::string name;
	std::cin >> name;

	// 출력하려는 메시지를 구성
	const std::string greeting = "Hello, " + name + "!";

	/*
	 **************** =>1st
	 *              * =>2nd
	 * Hello Aaron! * =>3rd
	 *              * =>4th
	 **************** =>5th
	 */
	// 인사말을 둘러싼 공백의 개수
	const int pad = 3; //공백 위아래 세칸

	// 출력할 행과 열 개수
	const int rows = pad * 2 + 3; //9줄
	const string::size_type cols = greeting.size() + pad * 2 + 2; //열 개수
	
	//입력 부분과 출력 부분을 구분하려고 한 행을 건너뜀
	cout << endl;

	// rows개 행을 출력합니다.
	// 불변성: 지금까지 r개 행을 출력
	for (int r = 0; r != rows; ++r) { //행 출력 
		string::size_type c = 0;

		// 불변성: 현재 행에서 c개 문자를 출력
		while (c != cols) { //열 출력 
			// 인사말 출력 여부를 판별
			if (r == pad + 1 && c == pad + 1){ //pad는 공백 +1은 별
				cout << greeting;
			c += greeting.size();
		}
			else {
				//테두리 출력 여부를 판별
				if (r == 0 || r == rows - 1 || //첫행이나 마지막 행
					c == 0 || c == cols - 1) //첫 열이나 마지막 열
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	 
	return 0;
}