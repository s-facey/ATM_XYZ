#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account s1;
    int choice = 0;
    double depAmt = 0.0;
    double wdrAmt = 0.0;

    while (choice != 4) {
        s1.menu();
        cin >> choice;
        switch (choice) {
        case 1: {
            s1.Withdraw(wdrAmt);
            system("pause");
            break;
        }
        case 2: {
            s1.Deposit(depAmt);
            system("pause");
            break;
        }
        case 3: {
            s1.getBalance();
            system("pause");
            break;
        }
        case 4: {
            exit(0);
        }
        }
    };
    return 0;
}