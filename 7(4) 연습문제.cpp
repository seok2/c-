#include <iostream>
using namespace std;

template <class T>
T squaret(T x)
{
	return x * x;
}

int main()
{
	int su, ans;
	double num, ans1;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> su;
	ans = squaret(su);

	cout << su << "�� ������ " << ans << "�Դϴ�.\n";

	cout << "�Ҽ��� �Է��ϼ���.\n";
	cin >> num;
	ans1 = squaret(num);

	cout << num << "�� ������ " << ans1 << "�Դϴ�.\n";

	return 0;
}