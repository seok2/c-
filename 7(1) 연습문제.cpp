#include <iostream>
using namespace std;

int square(int x)
{
	return x*x;
}

int main()
{
	int su, ans;

	cout << "������ �Է��ϼ���.\n";
	cin >> su;
	
	ans = square(su);

	cout << su << "�� ������" << ans << "�Դϴ�.\n";

	return 0;
}