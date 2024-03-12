#include <iostream>

using namespace std;

int main()
{
	string name = "Bro";
	int age = 21;
	string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


	string *pName = &name;
	int *pAge = &age;
//	string *pfreePizzas = &freePizzas; -> 문제 발생
// Array의 이름은 그 자체로 포인터다!!
	

	cout << pName << endl;
	cout << pAge << endl;
	cout << *freePizzas << endl; // Array의 0번째 요소를 출력

	cout << *pName << endl;
	cout << *pAge << endl;
	cout << freePizzas << endl; // 이미 메모리 주소임
	
	return 0;
}
