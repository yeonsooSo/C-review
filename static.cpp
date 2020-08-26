#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	static int sum; //���� ������ ���
	Car();
	void setCar(int n, double g);
	void show();
	static void showSum(); //���� ��� �Լ�
};

Car::Car() {
	num = 0;
	gas = 0.0;
	sum++;
	cout << "�ڵ����� ����������ϴ�.\n";
}
void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "���� ��ȣ�� " << num << "����, ���ᷮ�� " << gas << "���� �ٲ���.\n";
}
void Car::showSum() {
	cout << "�ڵ����� ��� " << sum << "�� �ֽ��ϴ�.\n";
}
void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�.\n";
	cout << "���ᷮ�� " << gas << "�Դϴ�.\n";
}

int Car::sum = 0;

int main() {
	Car::showSum();

	Car car1;
	car1.setCar(7135, 50.2);

	Car::showSum();
	
	Car car2;
	car2.setCar(5892, 10.9);

	Car::showSum();

	return 0;
}





