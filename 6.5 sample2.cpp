#include <iostream>
using namespace std;

int main() {
	int res, i;
	cout << "�� ��° ó���� �ǳ� �ٽðڽ��ϱ�? \n";

	cin >> res;

	for (i = 1; i <= 10; i++) {
		if (i == res)
			continue;
		cout << i << "��° ó���Դϴ�.\n";
	}

	return 0;
}