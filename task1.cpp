#include <iostream>
using namespace std;

int searchFruitIdx(string fruitname);

string fruit[4] = {"peach", "apple", "guava", "watermelon"};
int price[4] = {60, 70, 40, 30};

main()
{

    string fruitname;
    int quantity;
    int fruitidx;
    int fruitprice;
    int totalprice;

    cout << "Enter fruit name: ";
    cin >> fruitname;

    cout << "Enter the quantity of fruit bought: ";
    cin >> quantity;

    fruitidx = searchFruitIdx(fruitname);
    fruitprice = price[fruitidx];
    totalprice = fruitprice * quantity;

    cout << "Total price is: " << totalprice;
}

int searchFruitIdx(string fruitname)
{
    int requiredidx;

    for (int idx = 0; idx < 4; idx++)
    {
        if (fruit[idx] == fruitname)
        {
            requiredidx = idx;
            break;
        }
    }
    return requiredidx;
}
