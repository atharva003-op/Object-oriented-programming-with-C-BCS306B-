#include <iostream>
#include <string>

class BankEmployee {
    private:
    std::string name;
    int accountNo;
    double balance;
    double withdraw_amount;

public:
    void setDetails() {
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Account Number: ";
        std::cin >> accountNo;

        std::cout << "Enter Present Balance: ";
        std::cin >> balance;

        std::cout << "Enter Amount to Withdraw: ";
        std::cin >> withdraw_amount;
        std::cout<<"\n";

    }

    void printDetails() {
        std::cout<<"Name : "<<name<<std::endl;
        std::cout<<"Account Number : "<<accountNo<<std::endl;
        if (balance < 0) {
            std::cout << "Invalid Balance!" << std::endl;
        }
        else {
            std::cout<<"Balance : "<<balance<<std::endl;
        }

        if (withdraw_amount > balance) {
            std::cout << "Insufficient Balance!" << std::endl;
        }
        else if (withdraw_amount <= 0) {
            std::cout << "Invalid Withdraw Amount!" << std::endl;

        } else {
            std::cout << "Remaining Balance: " << balance-withdraw_amount << std::endl;
        }
    }
};

int main() {
    BankEmployee employee;

    employee.setDetails();
    employee.printDetails();

    return 0;
}
