#include <iostream>

using namespace std;

class Account{


public:

Account()
{
           balance = 1000;
}
     bool debit(double amount)
       {

         if(amount>balance)
               {
                  return 0;
               }
         else
               {
                 balance = balance-amount;
               }
        }
      double getBalance()
            {
                return balance;
            }
private:
      double balance;
};



int main(int argc, char const *argv[]){

  int amount,y;
       Account acct1;
       cout<<"Your account balance is "<<acct1.getBalance()<<endl<<endl;
       cout<<"Enter the amount you want to debit : ";
       while(y==0)
       {
       cin>>amount;
       cout<<endl;
       y = acct1.debit(amount);

       if(y==0)
       {
             cout<<"Your debit amount exceeds your account balance"<<endl;
             cout<<"Enter the amount again : ";
       }
       else
       {
         cout<<"Your remaining account balance is "<<acct1.getBalance()<<endl;
       }
     }

return 0;

}
