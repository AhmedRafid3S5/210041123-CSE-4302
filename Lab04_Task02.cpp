//write default and overloaded constructors
//void showAccountInfo()
//deposit function WILL NOT take -ve values
//cannot whitdraw more than current balance


#include<iostream>
#include<string>

class BankAccount
{
  private:
  int account_number;
  std::string account_name;
  std::string account_type;
  float current_balance;
  float min_balance;

  public:
  //default constructor
  BankAccount()
  {
    current_balance = 0.0;
    min_balance = 100.0;
  }
  //overloaded constructor
  BankAccount(int ac_num,std::string name, std::string type, float balance)
  {
    account_number = ac_num;
    account_name = name;
    account_type = type;
    current_balance = balance;
    //minimum balance criteria has to be set using the setter function
  }

  void setMinBalance(float min)
  {
    min_balance = min;
  }

  void showAccInfo()
  {
    std::cout<<"Account Number: "<<account_number<<"\n";
    std::cout<<"Account Holder Name: "<<account_name<<"\n";
    std::cout<<"Account type: "<<account_type<<"\n";
    std::cout<<"Current Balance: "<<current_balance<<"\n";
  }

  void showBalance()
  {
    std::cout<<"Current Balance: "<<current_balance<<"\n";
  }

  void deposit(float deposit_value)
  {

    if(deposit_value <0.0)
    {
        std::cout<<"Error: Deposit amount must be a positive value\n";
    }
    else{
      std::cout<<"Deposited "<<deposit_value<<"\n";
    current_balance+=deposit_value;
  
    }
   
  }

  void withdrawal(float withdraw)
  {
     if(current_balance - withdraw < min_balance)
     {
        std::cout<<"Invalid withdrawal amount\n";
        std::cout<<"Current holder can withdraw maximum: "<<current_balance-min_balance<<"\n";

     }
     else
     current_balance -= withdraw;

  }

  void giveInterest(float percent = 3.0)
  { 
    //Calculating interest vlue based on interest rate
     float interest_value = current_balance*(percent/100.0);
    //Calculating source tax deduction
     float source_tax_deduction = interest_value*0.1;
    //Calculating new balance
     current_balance = current_balance + (interest_value-source_tax_deduction);
  }

  ~ BankAccount()
  {
    std::cout<<"Account of "<<account_name<<"with account no";
    std::cout<<account_number;
    std::cout<<"is destroyed with a balance of ";
    std::cout<<"BDT "<<current_balance<<"\n";
  }


};

int main()
{

  BankAccount account_1(101,"Rafid","Savings",5000.0);
  account_1.setMinBalance(100.0);

  account_1.showAccInfo();
  account_1.deposit(1500.75);
  account_1.deposit(-100);
  account_1.showBalance();
  account_1.giveInterest(5.0);
  account_1.withdrawal(100000.0);
  account_1.withdrawal(500.0);
  account_1.showBalance();
  

  
}