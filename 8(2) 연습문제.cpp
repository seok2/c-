#include <iostream>
using namespace std;

void add(int* x1, int* x2, int a);

int main()
{
	int num1, num2;
	int plus = 0;

	cout << "2 ���� ���� ������ �Է��Ͻʽÿ�.\n";
	cin >> num1 >> num2;

	cout << "���� ������ �Է��Ͻʽÿ�.\n";
	cin >> plus;
	add(&num1, &num2, plus);

	cout << plus << "���� �������Ƿ�\n";
	cout << "���� 1�� " << num1 << "���� �Ǿ����ϴ�.\n";
	cout << "���� 2�� " << num2 << "���� �Ǿ����ϴ�.\n";

	return 0;
}

void add(int* x1, int* x2, int a)
{
	*x1 += a;
	*x2 += a;
}