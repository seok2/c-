#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x > y)	
		return x; 
	else 
		return y;
}

int main()
{
	int num1, num2, ans;

	cout << "ù ��° ������ �Է��ϼ���.\n";
	cin >> num1;

	cout << "�� ��° ������ �Է��ϼ���.\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "�ִ밪�� " << ans << "�Դϴ�.\n";

	return 0;
}