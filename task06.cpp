#include<iostream>
using namespace std;
main()
{
    int totalNumbers;
    int num;
    cout << "Enter amount of numbers :  ";
    cin >> totalNumbers;
    int number[totalNumbers];
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
    }
    cout << "Number for multiplication : ";
    cin >> num;
    cout << "Your Numbers will become : " << endl;
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        number[idx] = num * number[idx];
        cout << number[idx] << endl;
    }
}    