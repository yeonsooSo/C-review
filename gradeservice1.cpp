#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int score{ 0 };			// 입력받을 점수
	int countPass{ 0 };		// 합격자 인원을 세는 변수
	int countFail{ 0 };		// 불합격자 인원을 세는 변수
	int countTotal{ 0 };	// 총원을 세는 변수
	int passTotal{ 0 };		// 합격자 점수의 총합 (합격자 평균 계산 위해)
	int scoreTotal{ 0 };	// 전체 점수의 총합 (전체 평균 계산 위해)


	while (score != -1) {	// -1을 입력받을 때까지 반복 (Sentinel)
		if (score <= 100 && score >= 0) {
			cout << "점수를 입력하세요. (종료는 -1): ";
			cin >> score;
			if (score <= 100 && score >= 80) {	//합격 점수를 입력 받았을 때
				countPass++;		 // 합격자 수에 1 추가
				countTotal++;		 // 총 인원에 1 추가
				passTotal += score;	 // 합격자 점수의 총합에 입력받은 점수 더하기
				scoreTotal += score; // 전체 점수의 총합에 입력받은 점수 더하기
			}
			else if (score >= 0 && score < 80) {	//불합격 점수를 입력받았을 때
				countFail++;		// 불합격자 수에 1 추가
				countTotal++;		// 총 인원에 1 추가
				scoreTotal += score;// 전체 점수의 총합에 입력받은 점수 더하기
			}
		}
		else if (score != -1 && (score < 0 || score > 100)) {	// 범위 바깥의 점수를 입력받았을 때 - 인원 수에 포함하지 않는다.
			cout << "잘못된 입력입니다. 다시 입력하세요. (종료는 -1): ";
			cin >> score;
			if (score <= 100 && score >= 80) {
				countPass++;
				countTotal++;
				passTotal += score;
				scoreTotal += score;
			}
			else if (score >= 0 && score < 80) {
				countFail++;
				countTotal++;
				scoreTotal += score;
			}
		}
	}

	cout << "\n<객체지향 프로그래밍 성적>" << endl;

	int menu{ 0 };		// 입력받을 항목 번호

	while (menu != 6) { // 6을 입력받을 때까지 반복 (Sentinel)
		cout << "1. 분포도 2. 총원 3. 합격자 총원 4. 합격자 평균 5. 전체 평균 6. 종료" << endl;
		cout << "메뉴를 선택하세요: ";
		cin >> menu;

		switch (menu) {
		case(1):
			cout << "Pass: " << setw(3) << countPass << " ";		// 합격자 수 오른쪽 정렬
			for (int i{ countPass }; i > 0; i--) {					// 합격자 수만큼 '*'출력, 왼쪽 정렬
				cout << "*";
			}
			cout << "\nFail: " << setw(3) << countFail << " ";		// 불합격자 수 오른쪽 정렬
			for (int i{ countFail }; i > 0; i--) {					// 불합격자 수만큼 '*'출력, 왼쪽 정렬
				cout << "*";
			}
			cout << "\n\n";
			break;
		case(2):
			cout << "<총원: " << countTotal << ">\n\n";
			break;
		case(3):
			cout << "<합격자 총원: " << countPass << ">\n\n";
			break;
		case(4):
			cout << fixed << setprecision(2);		// 앞으로 소수점 2번째 자리까지 출력한다.
			//고정소수점 코드 위치 여기면 안 돼????????????? 
			cout << "<합격자 평균: " << static_cast<double>(passTotal) / countPass << ">\n\n";	// (합격자 점수의 총합) / (합격자 수)
			break;						// double형으로 형 변환
		case(5):
			cout << "<전체 평균: " << static_cast<double>(scoreTotal) / countTotal << ">\n\n";	// (점수의 총합) / (전체 인원 수)
			break;
		case(6):
			cout << "<프로그램이 종료되었습니다.>\n\n";
			break;
		default:	// 1~6 외의 숫자를 입력받았을 때
			cout << "<잘못된 입력입니다.>\n\n";
		}
	}

	return 0;
}