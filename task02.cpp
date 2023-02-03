#include<iostream>
using namespace std;
main()
{
    int totalNumners;
    cout << "Enter amount of numbers :  ";
    cin >> totalNumners;
    int number[totalNumners];
    for(int idx = 0 ; idx <= (totalNumners-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
    }
    cout <<"Your Numbers are : " << endl;
    for(int idx = 0 ; idx <= (totalNumners-1) ; idx++)
    {
        cout << number[idx] << endl;
    }
}