#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "���� num1�� ���� " << num1 << "�Դϴ�.\n";
	cout << "���� num2�� ���� " << num2 << "�Դϴ�.\n";
	cout << "���� num1�� num2�� ���� ��ȯ�մϴ�.\n";

	swap(&num1, &num2);

	cout << "���� num1�� ���� " << num1 << "�Դϴ�.\n";
	cout << "���� num2�� ���� " << num2 << "�Դϴ�.\n";

	return 0;
}

void swap(int* pX, int* pY)
{
	int tmp;

	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}