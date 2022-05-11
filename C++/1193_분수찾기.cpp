#include <iostream>
using namespace std;

int X;

int main() {
	cin >> X;
	
	// 지그재그가 올라가는지 내려가는지 알기 위해 몇번째 줄인지 구해야함
	int i = 1;
	while (X > i) {
		X -= i;
		i++;
	}

	if (i % 2 == 0)	//짝수번 -> 분모는 작아지고 분자는 커짐
		cout << X << "/" << i + 1 - X << endl;
	else // 홀수번 -> 분모는 커지고 분자는 작아짐
		cout << i + 1 - X << "/" << X << endl;

	return 0;
}
