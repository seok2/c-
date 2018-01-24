#include <iostream>
using namespace std;

int main()
{
	int i;
	
	cout << "1~10까지에서 짝수만 출력.\n";
	
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			cout << i << '\n';
		}
	}
	return 0;
}