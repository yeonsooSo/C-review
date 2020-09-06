#include "GradeService.h"

void GradeService::distribution(int a, int b)
{
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

double GradeService::passAve(int a, int b)
{
	return static_cast<double>(a) / b;
}

double GradeService::totalAve(int a, int b) 
{
	return static_cast<double>(a) / b;
}