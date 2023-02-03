#include<iostream>
using namespace std;

main()
{
    float due;
    float price[4];
    float priceInDollars;
    bool pay = false;
    cout << "Enter price in following order :-" << endl;
    cout << "[quaters , dimes , nickles , pennies]" << endl;
    for(int idx = 0 ; idx < 4 ; idx++)
    {
        cin >> price[idx] ; 
    }
    cout << "Enter total Due : ";
    cin >> due;
    price[0] = price[0]/4;
    price[1] = price[1]/10;
    price[2] = price[2]/20;
    price[3] = price[3]/100;
    priceInDollars = price[0] + price[1] + price[2] + price[3];
    if(priceInDollars >= due)
    {
        pay = true;
        cout <<"So => " <<  pay;
    }
    else
    {
        cout <<"So => " << pay;
    }


     


}