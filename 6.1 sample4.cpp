#include <iostream>
using namespace std;

int main()
{
	int num, i;
	int sum = 0;

	cout << "숫자1부터 몇까지의 합을 구하시겠습니까 ?\n";

	cin >> num;

	for (i = 1; i <= num; i++) {
		sum += i;
	}

	cout << "1부터" << num << "까지의 합은 " << sum << "입니다.\n";

	return 0;
}