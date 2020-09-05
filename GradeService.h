#pragma once
#include <iomanip>
#include <iostream>
//"1. 분포도 2. 총원 3. 합격자 총원 4. 합격자 평균 5. 전체 평균 6. 종료"
class GradeService {
public:
	void distribution(int a, int b);
	double passAve(int a, int b);
	double totalAve(int a, int b);

};
void distribution(int a, int b) {
	std::cout << "Pass: " << std::setw(3) << a << " ";		// 합격자 수 오른쪽 정렬
	for (int i{ a }; i > 0; i--) {					// 합격자 수만큼 '*'출력, 왼쪽 정렬
		std::cout << "*";
	}
	std::cout << "\nFail: " << std::setw(3) << b << " ";		// 불합격자 수 오른쪽 정렬
	for (int i{ b }; i > 0; i--) {					// 불합격자 수만큼 '*'출력, 왼쪽 정렬
		std::cout << "*";
	}
	std::cout << "\n\n";
}

double passAve(int a, int b) {
	return static_cast<double>(a) / b;
}
double totalAve(int a, int b) {
	return static_cast<double>(a) / b;
}
