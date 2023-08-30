#include<iostream>

class Calculator
{
   private:
   int value;

   public:

//Default constructor
   Calculator()
   {
    value = 0;
    //std::cout<<"Default constructor was called\n";
   }

//Overloaded constructor
   Calculator(int n):value(n){};

   int getValue()
   {

   }

   void setValue(int n)
   {
      value = n;
   }

   void add(int num)
   {
      value += num;
   }

   void subtract(int num)
   {
      value -= num;
   }

   void multiply(int num)
   {
     value *= num;
   }

   void divideBy(int num)
   {
    if(num == 0)
    {
        std::cout<<"Error : divide by 0 is undefined\n";
    }
    else
    value = value/num;
   }
   
   ~ Calculator()
   {
    std::cout<<"Calculator object is destroyed\n";
   };

   void clear()
   {
    value = 0;   
   }

   void display()
   {
    std::cout<<"Calculator display: "<<value<<"\n";
   }


};

int main()
{
    Calculator calculator;

    calculator.add(10);
    calculator.display();

    calculator.add(7);
    calculator.display();

    calculator.multiply(31);
    calculator.display();

    calculator.subtract(42);
    calculator.display();

    calculator.divideBy(7);
    calculator.display();

    calculator.divideBy(0);
    calculator.display();

    calculator.add(3);
    calculator.display();

    calculator.subtract(1);
    calculator.display();

    calculator.clear();
    calculator.display();


}