#include <iostream>
using namespace std;

void buy(int x, int y)
{
	cout << x << "���� ¥��," << y << "���� ¥�� ������ �����߽��ϴ�.\n";
}

int main()
{
	int num1, num2;

	cout << "�����Ͻô� ������ ������ ���Դϱ�? \n";
	cin >> num1;

	cout << "�����Ͻô� ������ ������ ���Դϱ�? \n";
	cin >> num2;

	buy(num1, num2);

	return 0;
}