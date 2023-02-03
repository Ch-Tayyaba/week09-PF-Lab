#include<iostream>
using namespace std;
main()
{
    int totalNumbers;
    int sum = 0;
    int average;
    int num;
    bool flag = true;
    cout << "Enter amount of numbers : ";
    cin >> totalNumbers;
    int number[totalNumbers];
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        cout <<"Enter Number : ";
        cin >> number[idx];
    }
    cout << "Again Enter any Number : ";
    cin >> num;
    for(int idx = 0 ; idx <= (totalNumbers-1) ; idx++)
    {
        if(num == number[idx])
        {
            cout << "Already Entered!" ;
            flag = false;
        }
    }
    if(flag == true)
    {
        cout << "You do not entered that number previous .";
    }
}