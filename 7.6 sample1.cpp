#include <iostream>
using namespace std;

void buy(int x = 10);

int main()
{
	cout << "ó�� ���Ű��� 100�����Դϴ�.\n";
	buy(100);

	cout << "�� ��° ���Ű��� �⺻���Դϴ�.\n";
	buy();

	return 0;
}

void buy(int x)
{
	cout << x << "���� ¥�� ������ �����߽��ϴ�.\n";
}