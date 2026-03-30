#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    float balance;

public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance = balance + amt;
    }

    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if (amt <= balance) {
            balance = balance - amt;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
