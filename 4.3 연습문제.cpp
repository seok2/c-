#include <iostream>
using namespace std;

int main()
{
	int jumsu,sum = 0;
	
	cout << "���� 1�� ������ �Է��ϼ���.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "���� 2�� ������ �Է��ϼ���.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "���� 3�� ������ �Է��ϼ���.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "���� 4�� ������ �Է��ϼ���.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "���� 5�� ������ �Է��ϼ���.\n";
	cin >> jumsu;
	sum += jumsu;

	cout << "5������ �հ�� : " << sum << " ���Դϴ�\n";
	cout << "5������ ����� : " << (double)sum / 5 << " ���Դϴ�.\n";

	return 0;

}