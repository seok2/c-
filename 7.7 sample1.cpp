#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

int main()
{
	int a, b;
	double da, db;

	cout << "���� 2���� �Է��ϼ���.\n";
	cin >> a >> b;

	cout << "�Ҽ� 2���� �Է��ϼ���.\n";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "�Է¹��� ������ �ִ� ���� " << ans1 << "�Դϴ�.\n";
	cout << "�Է¹��� �Ҽ��� �ִ� ���� " << ans2 << "�Դϴ�.\n";

	return 0;
}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}
