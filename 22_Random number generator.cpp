#include <iostream>

using namespace std;

// 주사위 눈금 랜덤 출력 예제
int main()
{
	srand(time(NULL));


	int num = rand() % 6 + 1; // % 6 -> 0~5만 출력
// +1을 함으로써 1~6 출력 가능

	cout << num;

	return 0;
}
