//
//  Account.h
//  ATM
//

#ifndef Account_h
#define Account_h
// Account class with a data member
// and member functions to set and get its value
#include <string>
#include <string_view>
#include <vector>

class Account {
    public:
        struct Transaction {
            std::string type;
            double amount;
        };
        explicit Account(std::string_view name)
            : m_name{name} {

            } // member initializer list
            // empty body
        void setName(std::string_view name) {
            m_name = name;
        }

        const std::string& getName() const {
            return m_name;
        }

        void deposit(double dep) {
            balance = balance + dep;
            Transaction transaction;
            transaction.type = "Deposit";
            transaction.amount = dep;
            transactions.push_back(transaction);
        }
        bool withdraw(double with) {
            if (balance >= with && with >= 0) {
                balance = balance - with;
                Transaction transaction;
                transaction.type = "Withdraw";
                transaction.amount = with;
                transactions.push_back(transaction);
                return true;
            } else {
                return false;
            }
        }
        const double& getBalance() const {
            return balance;
        }
        const std::vector<Transaction>& getTransactionHistory() const {
            return transactions;
        }
    private:
        std::string m_name;
        double balance = 0.0;
        std::vector<Transaction> transactions;
};

#endif /* Account_h */
