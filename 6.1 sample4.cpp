#include <iostream>
using namespace std;

int main()
{
	int num, i;
	int sum = 0;

	cout << "����1���� ������� ���� ���Ͻðڽ��ϱ� ?\n";

	cin >> num;

	for (i = 1; i <= num; i++) {
		sum += i;
	}

	cout << "1����" << num << "������ ���� " << sum << "�Դϴ�.\n";

	return 0;
}