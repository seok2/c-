#include <iostream>
using namespace std;

int main()
{
	int num, res;

	cout << "2개의 정수를 입력하세요.\n";

	cin >> num >> res;

	if (num == res) {
		cout << "두 숫자는 같습니다.\n";
	}

	else if (num > res) {
		cout << res << "보다 " << num << "이(가) 큽니다.\n";
	}
	else {
		cout << num << "보다 " << res << "이(가) 큽니다.\n";
	}

	return 0;
}