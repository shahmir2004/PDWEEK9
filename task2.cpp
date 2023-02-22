#include <iostream>
using namespace std;

string movies[5]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
int movieIdx(string moviename);
main()
{
    string moviename;
    int movieidx;
    int price;
    
    cout<<"Enter movie name: ";
    cin>>moviename;
    
    movieidx=movieIdx(moviename);

    if(movieidx%2==0)
    {
        price=500*0.9;
    }
    else
    {
        price=500*0.95;
    }

    cout<<"Your final price is: "<<price;







}

int movieIdx(string moviename)
{
    int requiredidx;
    for(int idx=0; idx<5; idx++)
    {
        if(movies[idx]==moviename)
        {
            requiredidx=idx;
            break;
        }

    }
    return requiredidx;
}