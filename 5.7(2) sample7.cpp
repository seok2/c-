#include <iostream>
using namespace std;

int main()
{
	int res;
	char ans;

	cout << "�� ��° �ڽ��� ���� �Ͻðڽ��ϱ�?\n";
	cout << "������ �Է��ϼ���.\n";

	cin >> res;

	ans = (res == 1) ? 'A' : 'B';

	cout << ans << "�ڽ��� �����߽��ϴ�.\n";

	return 0;

}