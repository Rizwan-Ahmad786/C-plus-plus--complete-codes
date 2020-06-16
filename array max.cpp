//  PROGRAM TO FIND MAXIMUM VALUE IN ARRAY.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array or number of digit you want to enter:";
    cin>>size;
    float array[size],index=-0,max=0;
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter "<<i+1<<" value: ";
        cin>>array[i];
    }
    cout<<"Enter the value to check the maximum value of data:";
    cin>>max;
    for(int i=0; i < size; i++)
        if(max <= array[i])
        {
            max = array[i];
            index = i;
        }
    if(index==-0)
        cout<<"\nCannot found the maximum number because\nthe value you enter "
        << max << " is large from the given data: \n"<<endl;
    else
    {
        cout<<"\nThe maximum value is "<< max <<endl<<endl;
       
    }
}

