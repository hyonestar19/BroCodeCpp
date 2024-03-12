#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
	double balance = 123;
	int choice = 0;

	do{
		cout << "********************";
		cout << "Enter your choice:\n";
		cout << "********************";
		cout << "1. Show Balance\n";
		cout << "2. Deposit Money\n";
		cout << "3. Withdraw Money\n";
		cout << "4. Exit\n";
		cin >> choice;

		cin.clear();
		fflush(stdin); // 이상한 값 입력 방지
		
		switch(choice)
		{
			case 1: showBalance(balance); break;
			case 2: balance += deposit(); showBalance(balance); break;
			case 3: balance -= withdraw(balance); break;
			case 4: cout << "Thanks for visiting!\n"; break;
			default: cout << "Invalid choice\n";
		}
	}while(choice != 4);
	return 0;
}

void showBalance(double balance)
{
	cout << "Your balance is: $" << setprecision(2) << fixed << balance << endl;
}
double deposit()
{
	double amount = 0;

	cout << "Enter amount to be deposited: ";
	cin >> amount;

	if(amount > 0) {
		return amount;
	} else {
		cout << "That's not a valid amount: \n";
		return 0;
	}
}

double withdraw(double balance)
{
	double amount = 0;

	cout << "Enter amount to be withdrawn: ";
	cin >> amount;
	
	if(amount > balance) {
		cout << insufficient funds\n";
		return 0;
	}
	else if(amount < 0) {
		cout << "That's not a valid amount\n";
		return 0;
	}
	else {
		return amount;
	}
}
