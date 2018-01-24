#include <iostream>
using namespace std;

void add(int* x1, int* x2, int a);

int main()
{
	int num1, num2;
	int plus = 0;

	cout << "2 과목 분의 점수를 입력하십시오.\n";
	cin >> num1 >> num2;

	cout << "더할 점수를 입력하십시오.\n";
	cin >> plus;
	add(&num1, &num2, plus);

	cout << plus << "점을 더했으므로\n";
	cout << "과목 1은 " << num1 << "점이 되었습니다.\n";
	cout << "과목 2은 " << num2 << "점이 되었습니다.\n";

	return 0;
}

void add(int* x1, int* x2, int a)
{
	*x1 += a;
	*x2 += a;
}