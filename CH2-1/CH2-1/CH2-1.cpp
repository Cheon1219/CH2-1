#include <iostream>

using namespace std;

int sumNum(int A, int B, int C, int D, int E) {

	int sum;

	sum = A + B + C + D + E;

	return sum;

}

double avgNum(int A, int B, int C, int D, int E) {
	
	double avg;

	avg = ((double)A + B + C + D + E) / 5;

	return avg;

}






int main() {

	int a[5];
	int input;

	cout << "���� 5���� �Է� ���ּ���." << endl;

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	cout << "���� ���Ϸ��� '1'��, ����� ���Ϸ��� '2'�� �Է� ���ּ���." << endl;

	cin >> input;

	if (input == 1) {
		cout << sumNum(a[0], a[1], a[2], a[3], a[4]) << endl;
	}
	else if (input == 2) {
		cout << avgNum(a[0], a[1], a[2], a[3], a[4]) << endl;
	}
	else {
		cout << "��ȿ�� ���ڰ� �ƴմϴ�." << endl;
	}

	cout << "������������ ���� �Ϸ��� '1'��, ������������ ���� �Ϸ��� '2'�� �Է� ���ּ���." << endl;

	cin >> input;

	if (input == 1) {
		
		int saveNum;
		for (int j = 0; j < 4; j++)
		for (int i = 0; i < 4 - j; i++) {
			if (a[i] > a[i + 1]) {
				saveNum = a[i];
				a[i] = a[i + 1];
				a[i + 1] = saveNum;
			}

		}

	}

	else if (input == 2) {
		int saveNum;
		for (int j = 0; j < 4; j++)
			for (int i = 0; i < 4 - j; i++) {
				if (a[i] < a[i + 1]) {
					saveNum = a[i];
					a[i] = a[i + 1];
					a[i + 1] = saveNum;
				}

			}
	}
	else {
		cout << "��ȿ�� ���ڸ� �Է����ּ���." << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
}