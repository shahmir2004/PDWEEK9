#include<iostream>
using namespace std;

int findidx(string input);

main()
{
    string input;
    bool ifEven;

    cout<<"Enter anything: ";
    getline(cin, input);
    
    int idx=findidx(input);

    if(idx%2==0)
    {
        ifEven=true;
    }
    else
    {
        ifEven=false;
    }

    cout<<ifEven;


}

int findidx(string input)
{
   
    int idx=0;
    
    while(input[idx]!='\0')
    {
        idx++;
    }
    return idx;

}