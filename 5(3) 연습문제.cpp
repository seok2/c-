#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "������ �Է��ϼ��� : ";

	cin >> grade;
	switch (grade) {
	case 1:
		cout << "������ 1�Դϴ�. ����ϼ���.\n";
		break;

	case 2:
		cout << "������ 2�Դϴ�. ���� �� ����ϼ���.\n";
		break;

	case 3:
		cout << "������ 3�Դϴ�. �� ���� ������ ��ǥ��!\n";
		break;
	case 4:
		cout << "������ 4�Դϴ�. �ſ� ���߽��ϴ�.\n";
		break;

	case 5:
		cout << "������ 5�Դϴ�. �ſ� ����մϴ�.\n";
		break;

	}

	return 0;
}