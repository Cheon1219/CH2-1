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

	cout << "숫자 5개를 입력 해주세요." << endl;

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	cout << "합을 구하려면 '1'을, 평균을 구하려면 '2'를 입력 해주세요." << endl;

	cin >> input;

	if (input == 1) {
		cout << sumNum(a[0], a[1], a[2], a[3], a[4]) << endl;
	}
	else if (input == 2) {
		cout << avgNum(a[0], a[1], a[2], a[3], a[4]) << endl;
	}
	else {
		cout << "유효한 숫자가 아닙니다." << endl;
	}

	cout << "오름차순으로 정렬 하려면 '1'을, 내림차순으로 정렬 하려면 '2'를 입력 해주세요." << endl;

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
		cout << "유효한 숫자를 입력해주세요." << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
}