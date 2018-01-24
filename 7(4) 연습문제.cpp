#include <iostream>
using namespace std;

template <class T>
T squaret(T x)
{
	return x * x;
}

int main()
{
	int su, ans;
	double num, ans1;
	cout << "정수를 입력하십시오.\n";
	cin >> su;
	ans = squaret(su);

	cout << su << "의 제곱은 " << ans << "입니다.\n";

	cout << "소수를 입력하세요.\n";
	cin >> num;
	ans1 = squaret(num);

	cout << num << "의 제곱은 " << ans1 << "입니다.\n";

	return 0;
}