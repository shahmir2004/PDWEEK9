#include <iostream>
using namespace std;

main()
{
    string string1;
    string string2;

    int count;
    int idx1=0;
    int idx2=0;

    cout<<"Enter string 1: ";
    getline(cin, string1);

    cout<<"Enter string 2: ";
    getline(cin, string2);

    while(string1[idx1]!='\0')
    {
        idx1=idx1+1;
    }

    while(string2[idx2]!='\0')
    {
        idx2=idx2+1;
    }

    if(idx1<idx2)
    {
        for(int i=0; i<idx1; i++)
        {

        }
    }

    cout<<idx1<<" "<<idx2;





}