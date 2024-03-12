#include <iostream>

using namespace std;

int main()
{
	int *pointer = nullptr;
	int x = 123;

	*pointer = &x; //이 줄을 주석처리하여 결과를 확인하세요

	// nullptr인지 확인
	if(pointer == nullptr) {
		cout << "address was not assigned!\n";
	}
	else {
		cout << "address was assigned!\n";
		cout << *pointer;
	}

	return 0;
}
