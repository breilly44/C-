//
//  main.cpp
//  ATM
//
//  Created by Brendan Reilly on 6/19/24.
//

#include <format>
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

void displayTransaction(const Account::Transaction& transaction) {
    std::cout << "Type: " << transaction.type << ", Amount: " << transaction.amount << std::endl;
}

int main() {

    Account myAccount{"brendan"};
    std::cout << "Initial account name: " << myAccount.getName() << std::endl;

    double deposit;
    double withdraw;
    std::string name{};
    std::string loop = "hello";
    
    std::cout << "Welcome to B's atm. You may 'deposit', 'withdraw', 'change account name', or 'view transaction history'" << std::endl;
    while (loop != "exit") {

        std::cout << "What atm action?" << std::endl;
        std::getline(std::cin, loop);

        if (loop == "deposit") {
            std::cout << "Deposit amount: ";
            std::cin >> deposit;
            std::cin.ignore();
            myAccount.deposit(deposit);
            std::cout << "Updated account balance: " << myAccount.getBalance() << std::endl;
        } else if (loop == "withdraw"){
            std::cout << "Enter amount to withdraw: ";
            std::cin >> withdraw;
            std::cin.ignore();
            if (myAccount.withdraw(withdraw)) {
                std::cout << "Withdraw successful!" << std::endl;
                std::cout << "Updated account balance: " << myAccount.getBalance() << std::endl;
            } else {
                std::cout << "Insufficient funds!" << std::endl;
            }
        } else if (loop == "change account name") {
            std::cout << "Enter the account name: ";
            std::getline(std::cin, name);
            myAccount.setName(name);
            std::cout << "Updated account name: " << myAccount.getName() << std::endl;
        } else if (loop == "view transaction history") {
            std::vector<Account::Transaction> transactionHistory = myAccount.getTransactionHistory();
            std::cout << "Transaction History:" << std::endl;
            for (const Account::Transaction& transaction : transactionHistory) {
                displayTransaction(transaction);
            }
        }
    }
    std::cout << "Thank you take care!" << std::endl;
}
