#include <iostream>
using namespace std;

int main()
{
	char res;

	cout << "����� �����Դϱ� ?\n";
	cout << "Y �Ǵ� N�� �Է��Ͻʽÿ�. \n";

	cin >> res;

	if (res == 'Y' || res == 'y') {
		cout << "����� �����̱���.\n";
	}

	else if (res == 'N' || res == 'n') {
		cout << "����� �����̱���.\n";
	}

	else {
		cout << "Y �Ǵ� N�� �Է��ϼ���. \n";
	}

	return 0;
}