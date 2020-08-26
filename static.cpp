#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	static int sum; //정적 데이터 멤버
	Car();
	void setCar(int n, double g);
	void show();
	static void showSum(); //정적 멤버 함수
};

Car::Car() {
	num = 0;
	gas = 0.0;
	sum++;
	cout << "자동차가 만들어졌습니다.\n";
}
void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << "차량 번호를 " << num << "으로, 연료량을 " << gas << "으로 바꿨어요.\n";
}
void Car::showSum() {
	cout << "자동차는 모두 " << sum << "대 있습니다.\n";
}
void Car::show() {
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
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





