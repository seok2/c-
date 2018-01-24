#include <iostream>
using namespace std;

int main()
{
	int jumsu,sum = 0;
	
	cout << "과목 1의 점수를 입력하세요.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "과목 2의 점수를 입력하세요.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "과목 3의 점수를 입력하세요.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "과목 4의 점수를 입력하세요.\n";
	cin >> jumsu;
	sum += jumsu;
	cout << "과목 5의 점수를 입력하세요.\n";
	cin >> jumsu;
	sum += jumsu;

	cout << "5과목의 합계는 : " << sum << " 점입니다\n";
	cout << "5과목의 평균은 : " << (double)sum / 5 << " 점입니다.\n";

	return 0;

}