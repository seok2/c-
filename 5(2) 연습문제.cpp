#include <iostream>
using namespace std;

int main()
{
	int num, res;

	cout << "2���� ������ �Է��ϼ���.\n";

	cin >> num >> res;

	if (num == res) {
		cout << "�� ���ڴ� �����ϴ�.\n";
	}

	else if (num > res) {
		cout << res << "���� " << num << "��(��) Ů�ϴ�.\n";
	}
	else {
		cout << num << "���� " << res << "��(��) Ů�ϴ�.\n";
	}

	return 0;
}