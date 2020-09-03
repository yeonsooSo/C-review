#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int score{ 0 };			// �Է¹��� ����
	int countPass{ 0 };		// �հ��� �ο��� ���� ����
	int countFail{ 0 };		// ���հ��� �ο��� ���� ����
	int countTotal{ 0 };	// �ѿ��� ���� ����
	int passTotal{ 0 };		// �հ��� ������ ���� (�հ��� ��� ��� ����)
	int scoreTotal{ 0 };	// ��ü ������ ���� (��ü ��� ��� ����)


	cout << "������ �Է��ϼ���. (����� -1): " << endl;
	cin >> score;
	while (score != -1) {
		if (score > 100 || score < 0) {
			cout << "�ùٸ� ������ �Է��ϼ���. (����� -1)" << endl;
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
		cout << "������ �Է��ϼ���. (����� -1): " << endl;
		cin >> score;
	}

	cout << "\n<��ü���� ���α׷��� ����>" << endl;
	cout << fixed;
	int menu{ 0 };		// �Է¹��� �׸� ��ȣ

	while (menu != 6) { // 6�� �Է¹��� ������ �ݺ� (Sentinel)
		cout << "1. ������ 2. �ѿ� 3. �հ��� �ѿ� 4. �հ��� ��� 5. ��ü ��� 6. ����" << endl;
		cout << "�޴��� �����ϼ���: ";
		cin >> menu;

		switch (menu) {
		case(1):
			cout << "Pass: " << setw(3) << countPass << " ";		// �հ��� �� ������ ����
			for (int i{ countPass }; i > 0; i--) {					// �հ��� ����ŭ '*'���, ���� ����
				cout << "*";
			}
			cout << "\nFail: " << setw(3) << countFail << " ";		// ���հ��� �� ������ ����
			for (int i{ countFail }; i > 0; i--) {					// ���հ��� ����ŭ '*'���, ���� ����
				cout << "*";
			}
			cout << "\n\n";
			break;
		case(2):
			cout << "<�ѿ�: " << countTotal << ">\n\n";
			break;
		case(3):
			cout << "<�հ��� �ѿ�: " << countPass << ">\n\n";
			break;
		case(4):
			cout << setprecision(2);		// ������ �Ҽ��� 2��° �ڸ����� ����Ѵ�.
			cout << "<�հ��� ���: " << static_cast<double>(passTotal) / countPass << ">\n\n";	// (�հ��� ������ ����) / (�հ��� ��)
			break;						// double������ �� ��ȯ
		case(5):
			cout << "<��ü ���: " << static_cast<double>(scoreTotal) / countTotal << ">\n\n";	// (������ ����) / (��ü �ο� ��)
			break;
		case(6):
			cout << "<���α׷��� ����Ǿ����ϴ�.>\n\n";
			break;
		default:	// 1~6 ���� ���ڸ� �Է¹޾��� ��
			cout << "<�߸��� �Է��Դϴ�.>\n\n";
		}
	}
	cout << "�̿����ּż� �����մϴ�." << endl;

	return 0;
}