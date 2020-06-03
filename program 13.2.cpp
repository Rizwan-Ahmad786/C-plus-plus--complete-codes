//write a class Marks with three data members to store three marks.
//Write three member function in() to input marks, sum() to calculate and
//return the sum and avg() to calculate and return the average marks.

#include<iostream>
using namespace std;

class Marks
{
private:
    int a,b,c;
public:
    void in()
    {
        cout<<"Enter three marks: "<<endl;
        cin>>a>>b>>c;
    }
    int sum()
    {
        return a+b+c;
    }
    float avg()
    {
        return(a+b+c)/3.0;
    }
};

int main()
{
    Marks obj;
    int s;
    float a;
    obj.in();
    s=obj.sum();
    a=obj.avg();
    cout<<"sum = "<<s<<endl;
    cout<<"avg = "<<a<<endl;
    return 0;

}
