#include<iostream>
using namespace std;
main()
{
    int totalNumbers;
    int sum = 0;
    int average;
    cout << "Enter amount of numbers :  ";
    cin >> totalNumbers;
    int number[totalNumbers];
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
    }
     cout <<"Your reverse numbers are : " << endl;
    for(int idx = totalNumbers-1 ; idx >= 0 ; idx--)
    {
        cout << number[idx] << endl;
    }
}    