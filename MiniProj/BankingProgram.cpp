#include <iostream>
#include <vector>

//pina oa mn ni oi, ayg palabi dong pwede rani himuag duha ka function tas i store ra ang variables sa main
int main(){

    static double balance;
    
    
    return 0;
}
class Database{
    private:
        std::vector<BankAccount> accounts; 
    
    public:
        void createAccount(const BankAccount& account){
            accounts.push_back(account);

        }
    
};

class BankAccount{

    private:
        double balance = 0;
        std::string name;
    public:
        BankAccount(std::string name)
            : name(name), balance(balance){}
        int getBalance() const{
            return balance;
        }
        std::string getName() const{
            return name;
        }

};
