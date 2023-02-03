#include<iostream>
using namespace std;

main()
{
    int number[5];
    int sum = 0;
    for(int idx = 0 ; idx <=4 ; idx++)
    {
        cout << "Enter Number : ";
       cin >> number[idx] ;
       sum = sum + number[idx];
    }
    cout << "SUM :" << sum;
} 