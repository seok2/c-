#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "���� ¥�� ������ �����߽��ϴ�.\n";
}

int main()
{
	int num;
	cout << "ù ��°�� �����ϴ� ������ ������ ���Դϱ�? \n";
	cin >> num;

	buy(num);

	cout << "�� ��°�� �����ϴ� ������ ������ ���Դϱ�? \n";
	cin >> num;
	buy(num);

	return 0;
}