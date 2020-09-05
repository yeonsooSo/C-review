#pragma once
#include <iomanip>
#include <iostream>
//"1. ������ 2. �ѿ� 3. �հ��� �ѿ� 4. �հ��� ��� 5. ��ü ��� 6. ����"
class GradeService {
public:
	void distribution(int a, int b);
	double passAve(int a, int b);
	double totalAve(int a, int b);

};
void distribution(int a, int b) {
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

double passAve(int a, int b) {
	return static_cast<double>(a) / b;
}
double totalAve(int a, int b) {
	return static_cast<double>(a) / b;
}
