#include <iostream>
using namespace std;


main()
{
    int idx;
    int enternumber;
    int currentnumber;
    int checknumber;
    int count=0;
    bool flag=false;
    cout<<"Enter quantity of numbers you want to enter: ";
    cin>>idx;

    int numbers[idx];
    for(int i=0; i<idx; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>numbers[i];

    }


    for(int i=0; i<idx; i++)
    {
        count=0;
        checknumber=numbers[i];
        while(checknumber>0)
        {
            checknumber=checknumber/10;
            count=count+1;
        }
        for(int j=count; j>0; j--)
        {
            currentnumber=numbers[i]%10;
            numbers[i]=numbers[i]/10;
            if(currentnumber==7)
            {
                flag=true;
                break;
            }
        }
    }

    if(flag)
    {
        cout<<"BOOM!";
    }
    else
    {
        cout<<"There is no 7 in the array";
    }

}

