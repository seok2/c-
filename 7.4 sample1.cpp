#include <iostream>
using namespace std;

int buy(int x, int y)
{
	int z;

	cout << x << "���� ¥��, " << y << "���� ¥�� ������ �����߽��ϴ�.\n";

	z = x + y;

	return z;
}

int main()
{
	int num1, num2, sum;

	cout << "�����Ͻ÷��� ������ ������ ���Դϱ�? \n";
	cin >> num1;

	cout << "�����Ͻ÷��� ������ ������ ���Դϱ�? \n";
	cin >> num2;

	sum = buy(num1, num2);

	cout << "�հ� �ݾ��� " << sum << "�����Դϴ�.\n";

	return 0;
}