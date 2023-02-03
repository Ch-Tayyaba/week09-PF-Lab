#include<iostream>
using namespace std;

main()
{
    int array01[2];
    int num;
    cout << "FIRST ARRAY :-" << endl;
    for(int idx = 0 ; idx < 2 ; idx++)
    {
        cout << "Enter number : ";
        cin >> array01[idx];
    }
    cout << "SECOND ARRAY :- " << endl;
    cout << "Enter total numbers for second array : ";
    cin >> num;
    int array02[num];
    for(int idx = 0 ; idx < num ; idx++)
    {
        cout << "Enter number : ";
        cin >> array02[idx];
    }
    cout << "[ " << array01[0];
    for(int idx = 0 ; idx < num ; idx++)
    {
        cout << ", " << array02[idx];
    }
    cout << " , " << array01[1] << " ]";
}