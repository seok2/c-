#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "������ ù ��° ���ڸ� �Է��ϼ���.\n";
	cin >> num1;

	cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";
	cin >> num2;

	cout << "�� ���� ���� ���� : " << num1 + num2 << "�Դϴ�.\n";
	cout << "�� ���� ���� ���� : " << num1 * num2 << "�Դϴ�.\n";
	cout << "�� ���� ���� ���� : " << num1 / num2 << "�Դϴ�.\n";
	cout << "�� ���� �� ���� : " << num1 - num2 << "�Դϴ�.\n";
	cout << "�� ���� ���� ������ ���� : " << num1 % num2 << "�Դϴ�.\n";

	return 0;

}