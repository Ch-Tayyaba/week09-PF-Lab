#include<iostream>
using namespace std;
main()
{
    int totalNumbers;
    int small = 1000000;
    cout << "Enter amount of numbers :  ";
    cin >> totalNumbers;
    int number[totalNumbers];
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
    }
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        if(small > number[idx])
        {
            small = number[idx];
        }
    }
    cout << "SMALLEST NUMBER : " << small;

}    