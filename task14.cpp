#include<iostream>
using namespace std;

main()
{
    int totalNumber;
    int sum = 0;
    cout << "Enter Total number of resistances : ";
    cin >> totalNumber;
    int resistance[totalNumber];
    for(int idx = 0 ; idx < totalNumber ; idx++)
    {
        cout << "Enter Resistance :  ";
        cin >> resistance[idx] ;
        sum = sum + resistance[idx];
       
    }
    cout << "Total Resistance : " << sum;
} 