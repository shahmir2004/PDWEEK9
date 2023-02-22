#include<iostream>
using namespace std;

main()
{
    int colournumber;
    int timeschanged=-1;
    int timepercolour;
    int price;
    cout<<"Enter number of colours: ";
    cin>>colournumber;
    string colour[colournumber];

    for(int i=0; i<colournumber; i++)
    {
        cout<<"Enter colour: ";
        cin>>colour[i];
    }

    for(int i=0; i<colournumber; i++)
    {
        if(colour[i]!=colour[i+1])
        {
            timeschanged++;
        }

    }

    timepercolour=colournumber*2;
    price=timepercolour+timeschanged;
    cout<<price;

}