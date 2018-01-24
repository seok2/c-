#include <iostream>
using namespace std;

int square(int x)
{
	return x * x;
}
double square(double x)
{
	return x * x;
}

int main()
{
	int su, ans;
	double num, ans1;
	cout << "정수를 입력하십시오.\n";
	cin >> su;
	ans = square(su);

	cout << su << "의 제곱은 " << ans << "입니다.\n";

	cout << "소수를 입력하세요.\n";
	cin >> num;
	ans1 = square(num);
	
	cout << su << "의 제곱은 " << ans1 << "입니다.\n";

	return 0;
}