#pragma once
class Account
{
private:
	double balance;
public:
	Account();
	double getBalance();
	double Deposit(double amount);
	bool Withdraw(double amount);
	void menu();
};

