#include <iostream>
using namespace std;

int main()
{
	int a;
	int* pA;

	a = 5;
	pA = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";
	cout << "���� a�� �ּҴ� " << &a << "�Դϴ�.\n";
	cout << "������ pA�� ���� " << pA << "�Դϴ�.\n";

	return 0;
}