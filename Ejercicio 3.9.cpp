#include <iostream>
#include <string>
class Account{
public:
Account (std::string accountName,int initialBalance)
: name{accountName}{
    if (initialBalance>0){
        balance=initialBalance;
    }
}
void deposit(int depositAmount){
    if (depositAmount>0) {
        balance = balance + depositAmount;
    }
}
int getbalance() const{
        return balance;
}

void setName(std::string accountName){
    name=accountName;
}
std::string name;
int balance{0};
};
return 0;
