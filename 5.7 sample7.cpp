#include <iostream>
using namespace std;

int main()
{
	int res;
	char ans;

	cout << "�� ��° �ڽ��� ���� �Ͻðڽ��ϱ� ?\n";
	cout << "������ �Է��Ͻʽÿ�. \n";

	cin >> res;

	if (res == 1) {
		ans = 'A';
	}
	else {
		ans = 'B';
	}

	cout << ans << "�ڽ��� �����߽��ϴ�.\n";

	return 0;
}