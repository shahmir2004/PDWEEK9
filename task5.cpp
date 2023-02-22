#include<iostream>
using namespace std;

main()
{
    string checksymbols[4];
    string checkstrings;
    int secondidx=0;
    char previouschar;
    char nextchar;
    bool flag=false;
    
    for(int i=0; i<4; i++)
    {
        cout<<"Enter the symbol: ";
        cin>>checksymbols[i];
    }

    if(checksymbols[0]==checksymbols[1] && checksymbols[2]==checksymbols[3])
    {
        flag=true;
    }
    
    if(flag)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}