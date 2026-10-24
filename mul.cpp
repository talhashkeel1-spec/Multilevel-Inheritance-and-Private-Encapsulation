#include <iostream>
#include<string>
using namespace std;
class account{
    private:
    int accountno;
    public:
    int account;
    void setter(int acc){
        accountno=acc;
    }
        int getter(){
            return accountno;
        }
    
};
class savingaccount:public account{
    private:
    double balance;
    public:
    double setbalance;
    void setterb(double bal){
        balance=bal;
    }
    double getterb(){
            return balance;
        }
    
};
class customer:public savingaccount{
    public: 
    string customername;
    void returner(){
cout << "Customer Name: " << customername << endl;
        cout << "Account No:    " << getter() << endl;
        cout << "Balance:       $" << getterb() << endl;    }

};
int main (){
    customer c1;
    c1.customername="Ali";
        c1.setter(32);
    c1.setterb(2345.32);
    c1.returner();
};
