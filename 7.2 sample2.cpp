#include <iostream>
using namespace std;

void buy()
{
	cout << "차를 구입했습니다.\n";
}

int main()
{
	buy();

	cout << "차를 1대 더 구입했습니다.\n";

	buy();

	return 0;
}