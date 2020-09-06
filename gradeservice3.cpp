#include <iostream>
#include <iomanip>
#include "GradeService.h"
using namespace std;

int main() {
	int score{ 0 };			// 입력받을 점수
	int countPass{ 0 };		// 합격자 인원을 세는 변수
	int countFail{ 0 };		// 불합격자 인원을 세는 변수
	int countTotal{ 0 };	// 총원을 세는 변수
	int passTotal{ 0 };		// 합격자 점수의 총합 (합격자 평균 계산 위해)
	int scoreTotal{ 0 };	// 전체 점수의 총합 (전체 평균 계산 위해)


	cout << "점수를 입력하세요. (종료는 -1): " << endl;
	cin >> score;
	while (score != -1) {
		if (score > 100 || score < 0) {
			cout << "올바른 점수를 입력하세요. (종료는 -1)" << endl;
			cin >> score;
			continue;
		}
		else if (score >= 80) {
			countPass++;
			countTotal++;
			passTotal += score;
			scoreTotal += score;
		}
		else {
			countFail++;
			countTotal++;
			scoreTotal += score;
		}
		cout << "점수를 입력하세요. (종료는 -1): " << endl;
		cin >> score;
	}

	cout << "\n<객체지향 프로그래밍 성적>" << endl;
	cout << fixed;
	int menu{ 0 };		// 입력받을 항목 번호

	GradeService grade1;
	while (menu != 6) { // 6을 입력받을 때까지 반복 (Sentinel)
		cout << "1. 분포도 2. 총원 3. 합격자 총원 4. 합격자 평균 5. 전체 평균 6. 종료" << endl;
		cout << "메뉴를 선택하세요: ";
		cin >> menu;

		switch (menu) {
		case(1):
			grade1.distribution(countPass, countFail);
			break;
		case(2):
			cout << "<총원: " << countTotal << ">\n\n";
			break;
		case(3):
			cout << "<합격자 총원: " << countPass << ">\n\n";
			break;
		case(4):
			cout << setprecision(2);		// 앞으로 소수점 2번째 자리까지 출력한다.
			cout << "<합격자 평균: " << grade1.passAve(passTotal,countTotal) << ">\n\n";	// (합격자 점수의 총합) / (합격자 수)
			break;						// double형으로 형 변환
		case(5):
			cout << "<전체 평균: " << grade1.totalAve(scoreTotal, countTotal) << ">\n\n";	// (점수의 총합) / (전체 인원 수)
			break;
		case(6):
			cout << "<프로그램이 종료되었습니다.>\n\n";
			break;
		default:	// 1~6 외의 숫자를 입력받았을 때
			cout << "<잘못된 입력입니다.>\n\n";
		}
	}
	cout << "이용해주셔서 감사합니다." << endl;

	return 0;
}