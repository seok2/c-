#include <iostream>
using namespace std;

int main()
{
	int grade = 1;
	int sum = 0;

	while (grade != 0) {
		cout << "시험 점수를 입력하십시오. (0으로 종료).\n";
		cin >> grade;
		sum += grade;
	}

	cout << "시험 점수의 합계는 " << sum << "점 입니다.\n";

	return 0;
}