// OLD Fashioned
typedef vector<pair<string, int>> pairlist_t;
typedef string text_t;
typedef int number_t;

// Nowaday
using text_t = string; // text_t는 string형태를 취한다.
using number_t = int; // number_t는 int형태의 값을 갖는다.

// simple example
#include <iostream>
#include <vector>

using namespace std;
using text_t = string;
using number_t = int;

int main()
{
	text_t firstName = "Lee";
	cout << firstName << endl;

	number_t age = 21;
	cout << age << endl;
}
