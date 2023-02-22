#include<iostream>
using namespace std;

main()
{
    int digits;
    int times;
    cout<<"Enter digits in the array: ";
    cin>>digits;
    

    int numbers[digits];


    for(int i=0; i<digits; i++)
    {
        cout<<"Enter number in the array at position "<<i+1<<" : ";
        cin>>numbers[i];
    }
    
    cout<<"Enter number of times to perform the even odd transform: ";
    cin>>times;
    
    for(int j=1; j<=times; j++)
    {
        for(int i=0; i<digits; i++)
        {
            if(numbers[i]%2==0)
        {
            numbers[i]=numbers[i]-2;
        }
        else
        {
            numbers[i]=numbers[i]+2;
        }

    }

    }
    

    for(int i=0; i<digits; i++)
    {
        cout<<numbers[i]<<" ";
    }

}