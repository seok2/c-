#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 10;
	int* pA = &a;


	cout << "���� a�� ���� " << a << "�Դϴ�.\n";
	cout << "������ pA�� ���� " << pA << "�Դϴ�.\n";
	cout << "pA�� ���� " << *pA << "�Դϴ�.\n";

	pA = &b;

	cout << "���� b�� ���� " << b << "�Դϴ�.\n";
	cout << "������ pA�� ���� " << pA << "�� �ٲ�����ϴ�.\n";
	cout << "pA�� ���� " << *pA << "�Դϴ�.\n";

	return 0;
}