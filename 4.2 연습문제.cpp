#include <iostream>
using namespace std;

int main()
{
	double high, byun;
	cout << "높이를 입력하세요\n";
	cin >> high;

	cout << "밑변을 입력하세요.\n";
	cin >> byun;

	cout << "삼각형의 넓이는 : " << high * byun / 2 << "입니다.\n";

	return 0;
}