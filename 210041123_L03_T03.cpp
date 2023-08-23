#include<iostream>
#include<string.h>

class Medicine
{
    private:
      char name[50];
      char genericName[50];
      int discountPercent = 0; // 0-45% discount
      double unitPrice = 0; //max unit price

    public:
        void assignName(char Name[],char GenericName[])
        {
            strcpy(name,Name);
            strcpy(genericName,GenericName);
        }

        void assignPrice(double price=0)
        {
            if(price < 0)
            unitPrice = 0;

            else
            unitPrice = price;
        }

        void setDiscountPercent(double percent)
        {
            if(percent<0 || percent>45)
            discountPercent = 5;

            else
            discountPercent = percent;
        }

        double getSellingPrice(double nos)
        {
            double discountedUnitPrice = unitPrice*((100.0-discountPercent)/100.0);
            return nos*discountedUnitPrice;
        }

        void display()
        {
            std::cout<<"Name:"<<name<<"\n";
            std::cout<<"Generic Name:"<<genericName<<"\n";
            std::cout<<"Unit Price:"<<unitPrice<<"\n";
            std::cout<<"Current Discount:"<<discountPercent<<"%\n";
        }
};

int main()
{
    Medicine Paracetamol;
    Paracetamol.assignName("Paracetamol","Napa");
    Paracetamol.assignPrice();
    Paracetamol.setDiscountPercent(10.0);
    Paracetamol.display();

    int amount = 5;
    std::cout<<"Price of "<<amount<< " units:"<<Paracetamol.getSellingPrice(amount)<<"\n";
}
