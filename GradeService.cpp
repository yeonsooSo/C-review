#include "GradeService.h"

void GradeService::distribution(int a, int b)
{
	std::cout << "Pass: " << std::setw(3) << a << " ";		// �հ��� �� ������ ����
	for (int i{ a }; i > 0; i--) {					// �հ��� ����ŭ '*'���, ���� ����
		std::cout << "*";
	}
	std::cout << "\nFail: " << std::setw(3) << b << " ";		// ���հ��� �� ������ ����
	for (int i{ b }; i > 0; i--) {					// ���հ��� ����ŭ '*'���, ���� ����
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