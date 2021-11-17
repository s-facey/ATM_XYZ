#include "Account.h"
#include <iostream>
using namespace std;

/*Account::Account()
{
	balance = 0.00;
}*/

Account::Account()
{
	double init_balance;
	cout << "\n\t\t\tEnter initial balance to start account...";
	cout << "\n\t\t\tMinimum for starting an account : $1000...";
	cout << "\n\t\t\tStarting Balance : $";
	cin >> init_balance;
	if (init_balance >= 1000) {
		balance = init_balance;
		cout << "\n\t\t\tAccount activation successful...";
		cout << "\n\n\t\t\t";
		system("pause");
	}
	else {
		balance = 0.00;
		cout << "\n\t\t\tAccount activation failed...";
		cout << "\n\n\t\t\t";
		system("pause");
		
	}
	
}

double Account::getBalance()
{
	cout << "\n\t\t\tAvailable balance : $" << balance;
	cout << "\n\n\t\t\t";

	return 0.00;
}

double Account::Deposit(double amount)
{
	cout << "\n\t\t\tDeposit Amount : $";
	cin >> amount;
	balance += amount;
	cout << "\n\t\t\tTransaction successful.\n\t\t\tAvailable Balance : $" << balance;
	cout << "\n\n\t\t\t";
	return 0.0;
}

bool Account::Withdraw(double amount)
{
	cout << "\n\t\t\tDebit : $";
	cin >> amount; 
	if (amount < balance) {
		balance -= amount;
		cout << "\n\t\t\tDebit             : $" << amount;
		cout << "\n\t\t\tRemaining balance : $" << balance;
		cout << "\n\n\t\t\tThank you for banking with us...";
		cout << "\n\n\t\t\t";
	}
	else {
		cout << "\n\t\t\tInsufficient funds...";
		//cout << endl;
		cout << "\n\n\t\t\t";
	}

	return false;
}

void Account::menu()
{
	system("cls");
	cout << "\n\n\t\t\t||==============================================================================||";
	cout << "\n\t\t\t||================================= MENU =========================================||";
	cout << "\n\t\t\t||====================== 1. Debit Account ========================================||";
	cout << "\n\t\t\t||====================== 2. Credit Account =======================================||";
	cout << "\n\t\t\t||====================== 3. Account Balance ======================================||";
	cout << "\n\t\t\t||====================== 4. EXIT            ======================================||";
	cout << "\n\n\t\t\t|======================>> ";

}
