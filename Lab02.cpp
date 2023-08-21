
#include <iostream>            //Preprocessing directives

using namespace std;           // 'using' is a directive

/*int main()                   //Main function is called by the OS or the Code Blocks Program
{
    cout<<"Hello World"<<endl; // cout - an output stream object, '<<' - insertion operator, 'endl' - manipulator.
    return 0;
}*/


/*int main ()
{
    int a,b;

    a = 5; b = 10;

    cout<<a<<" is greater than "<<b<<endl; //Cascading display to print in one line

    cin>>a;                                //cin is an input stream object, '>>' - extraction operator,
    cout<<"New Value of a: "<<a;

    return 0;
}*/

int main()
{
    enum days_of_week {Sun,Mon,Tue,Wed,Thu,Fri,Sat};

    days_of_week today = Sat;

    cout<<today;
}
