
#include <iostream>
#include <string>

int main(void) {
    // 고정 크기로 출력 (입력 없음)
    const int squareSize = 5;      // 정사각형 한 변 길이
    const int rectW = 8, rectH = 4; // 직사각형 가로, 세로
    const int triH = 5;            // 정삼각형(이등변 형태로 높이 기준)

    // 정사각형
    for (int i = 0; i < squareSize; ++i) {
        for (int j = 0; j < squareSize; ++j) 
            std::cout << '*';
        std::cout << '\n';
    }
    std::cout << '\n';

    // 직사각형
    for (int i = 0; i < rectH; ++i) {
        for (int j = 0; j < rectW; ++j) std::cout << '#';
        std::cout << '\n';
    }
    std::cout << '\n';

    // 정삼각형 (위아래가 대칭인 이등변 형태로 출력하여 정삼각형 모양을 표현)
    for (int i = 1; i <= triH; ++i) {
        // 왼쪽 공백
        for (int s = 0; s < triH - i; ++s) std::cout << ' ';
        // 별 출력
        for (int k = 0; k < 2 * i - 1; ++k) std::cout << '*';
        std::cout << '\n';
    }
    std::cout << '\n';

    // 직각삼각형 출력 (왼쪽 정렬, 높이 triH)
    for (int i = 1; i <= triH; ++i) {
        for (int j = 1; j <= i; ++j) std::cout << '*';
        std::cout << '\n';
    }

    return 0;
}
