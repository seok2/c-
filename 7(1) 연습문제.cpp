#include <iostream>
using namespace std;

int square(int x)
{
	return x*x;
}

int main()
{
	int su, ans;

	cout << "정수를 입력하세요.\n";
	cin >> su;
	
	ans = square(su);

	cout << su << "의 제곱은" << ans << "입니다.\n";

	return 0;
}