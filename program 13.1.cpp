//write a program that declares a class with one integer data member and
//two member function in() and out() to input and output data in data member.
#include<iostream>
using namespace std;

class test
{
private:
    int n;
public:
    void in()
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
    }
    void out()
    {
        cout<<"The value of n is : "<<n<<endl;
    }
};

int main()
{
   test obj;
   obj.in();
   obj.out();

   return 0;
}
