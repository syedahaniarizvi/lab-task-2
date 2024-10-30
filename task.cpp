#include <iostream>
using namespace std;

int main() {
    // Declare variables for initial balance, deposit, and withdrawal amounts
    double balance, deposit, withdrawal;
    
    // Input initial balance
    cout << "Enter the initial balance: ";
    cin >> balance;
    
    // Input deposit amount
    cout << "Enter the deposit amount: ";
    cin >> deposit;
    
    // Update balance using assignment operator
    balance += deposit;
    cout << "Balance after deposit: " << balance << endl;
    
    // Input withdrawal amount
    cout << "Enter the withdrawal amount: ";
    cin >> withdrawal;
    
    // Update balance using assignment operator
    balance -= withdrawal;
    cout << "Balance after withdrawal: " << balance << endl;
    
    return 0;
}
