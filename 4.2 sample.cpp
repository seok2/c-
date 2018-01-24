#include <iostream>
using namespace std;

int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;
	int gop = num1 * num2;

	cout << "변수 num1의 값은 : " << num1 << "입니다.\n";
	cout << "num1 + num2 값은 : " << sum << "입니다.\n";
	cout << "num1 * num2 값은 : " << gop << "입니다.\n";

	num1 += 1;

	cout << "num1 값에 1을 더한 값은 : " << num1 << "입니다.\n";
	return 0;
}