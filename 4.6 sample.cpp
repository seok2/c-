#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0;

	cout << "첫 번째 정수를 입력하세요 : \n";
	cin >> num;
	sum += num;

	cout << "두 번째 정수를 입력하세요 : \n";
	cin >> num;
	sum += num;
	
	cout << "세 번째 정수를 입력하세요 : \n";
	cin >> num;
	sum += num;

	cout << "세 숫자의 합은 : " << sum << "입니다.\n";

	return 0;
}