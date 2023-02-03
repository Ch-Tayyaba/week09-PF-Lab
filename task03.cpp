#include<iostream>
using namespace std;
main()
{
    int totalNumners;
    int sum = 0;
    int average;
    cout << "Enter amount of numbers :  ";
    cin >> totalNumners;
    int number[totalNumners];
    for(int idx = 0 ; idx <= (totalNumners-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
        sum = sum + number[idx]; 
    }
    average = sum/totalNumners;
    cout << "SUM : " << sum << endl;
    cout << "AVERAGE : " << average;
}    