#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int* pA = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";

	*pA = 50;

	cout << "pA�� 50�� �����߽��ϴ�.\n";
	cout << "���� a�� ���� " << a << "�Դϴ�.\n";

	return 0;
}