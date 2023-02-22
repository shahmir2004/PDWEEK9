#include <iostream>
#include <string>

using namespace std;

main()
{

    string pin;
    int idx = 0;
    char currentchar;
    int digit1;
    int digit2;
    int digit3;
    int digit4;
    string out1;
    string out2;
    string out3;
    string out4;

    int currentint;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    cout << "Enter your pin: ";
    cin >> pin;

    int intpin = stoi(pin);

    if (intpin <= 9999)

    {
        digit4 = intpin % 10;
        intpin = intpin / 10;

        digit3 = intpin % 10;
        intpin = intpin / 10;

        digit2 = intpin % 10;
        intpin = intpin / 10;

        digit1 = intpin;

        digit2 = digit2 + 1;
        digit3 = digit3 + 2;
        digit4 = digit4 + 3;

        if (digit2 >= 10)
        {
            digit2 = digit2 - 10;
        }
        if (digit3 >= 10)
        {
            digit3 = digit3 - 10;
        }
        if (digit4 >= 10)
        {
            digit4 = digit4 - 10;
        }

        out1 = moves[digit1];
        out2 = moves[digit2];
        out3 = moves[digit3];
        out4 = moves[digit4];
        cout << out1 << " " << out2 << " " << out3 << " " << out4;
    }
    else
    {
        cout<<"Invalid pin!";
    }
    
}


string checkIt(string pin)
{

    


}