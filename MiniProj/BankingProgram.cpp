#include <iostream>
#include <typeinfo>

namespace bankAcc
{
    double balance = 0;

    void deposit()
    {
        std::cout << "Input amount to deposit: ";
        double amount;
        std::cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        std::cout << "Input amount to withdraw: ";
        double amount;
        std::cin >> amount;
        balance -= amount;
    }
    void viewBalance()
    {
        std::cout << "Your current balance is: " << balance << "$" << std::endl;
    }
}

void menu()
{
    bool quit = false;
    while (!quit)
    {
        int choice;
        std::cout << "Banking\n\n1.Deposit\n2.Withdraw\n3.View Balance\n4.Quit"<<std::endl;
        std::cout << "Choose an option: "; std::cin >> choice;
        if (typeid(choice) == typeid(int))
        {   switch (choice)
            {
            case 1:
                bankAcc::deposit();
                break;
            case 2:
                bankAcc::withdraw();
                break;
            case 3:
                bankAcc::viewBalance();
                break;
            case 4:
                quit = true;
                break;
            default:
                std::cout << "Choose an option between 1-4";
            }
        }
        std::cout<<"Type an integer."<<std::endl; break;
    }
}

int main()
{
    menu();
    return 0;
}
