#include <iostream>
using namespace std;

int square(int x)
{
	return x * x;
}
double square(double x)
{
	return x * x;
}

int main()
{
	int su, ans;
	double num, ans1;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> su;
	ans = square(su);

	cout << su << "�� ������ " << ans << "�Դϴ�.\n";

	cout << "�Ҽ��� �Է��ϼ���.\n";
	cin >> num;
	ans1 = square(num);
	
	cout << su << "�� ������ " << ans1 << "�Դϴ�.\n";

	return 0;
}