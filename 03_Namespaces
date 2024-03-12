// 에러 발생
// int x = 0;
// int x = 1;

#include <iostream>

using namespace std;

namespace first{
	int x = 1;
}

namespace second{
	int x = 2;
}

int main()
{
	int x = 0;
	cout << x << endl; // 0을 출력
	cout << first::x << endl; // 1을 출력
	cout << second::x << endl; // 2를 출력
}

// using namespace
#include <iostream>

using namespace std;
using namespace first {
	int x = 1;
}

int main()
{
	cout << x << endl; // 1을 출력 (현재 first라는 네임스페이스를 사용하기 때문)
}
