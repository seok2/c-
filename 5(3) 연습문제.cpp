#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "성적을 입력하세요 : ";

	cin >> grade;
	switch (grade) {
	case 1:
		cout << "성적은 1입니다. 노력하세요.\n";
		break;

	case 2:
		cout << "성적은 2입니다. 조금 더 노력하세요.\n";
		break;

	case 3:
		cout << "성적은 3입니다. 더 높은 점수를 목표로!\n";
		break;
	case 4:
		cout << "성적은 4입니다. 매우 잘했습니다.\n";
		break;

	case 5:
		cout << "성적은 5입니다. 매우 우수합니다.\n";
		break;

	}

	return 0;
}