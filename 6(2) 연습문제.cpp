#include <iostream>
using namespace std;

int main()
{
	int grade = 1;
	int sum = 0;

	while (grade != 0) {
		cout << "���� ������ �Է��Ͻʽÿ�. (0���� ����).\n";
		cin >> grade;
		sum += grade;
	}

	cout << "���� ������ �հ�� " << sum << "�� �Դϴ�.\n";

	return 0;
}