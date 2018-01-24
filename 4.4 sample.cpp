#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "임의의 첫 번째 숫자를 입력하세요.\n";
	cin >> num1;

	cout << "임의의 두 번째 숫자를 입력하세요.\n";
	cin >> num2;

	cout << "두 수를 더한 값은 : " << num1 + num2 << "입니다.\n";
	cout << "두 수를 곱한 값은 : " << num1 * num2 << "입니다.\n";
	cout << "두 수를 나눈 값은 : " << num1 / num2 << "입니다.\n";
	cout << "두 수를 뺀 값은 : " << num1 - num2 << "입니다.\n";
	cout << "두 수를 나눈 나머지 값은 : " << num1 % num2 << "입니다.\n";

	return 0;

}