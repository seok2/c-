#include <iostream>
using namespace std;

int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;
	int gop = num1 * num2;

	cout << "���� num1�� ���� : " << num1 << "�Դϴ�.\n";
	cout << "num1 + num2 ���� : " << sum << "�Դϴ�.\n";
	cout << "num1 * num2 ���� : " << gop << "�Դϴ�.\n";

	num1 += 1;

	cout << "num1 ���� 1�� ���� ���� : " << num1 << "�Դϴ�.\n";
	return 0;
}