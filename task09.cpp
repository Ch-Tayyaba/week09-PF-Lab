#include<iostream>
using namespace std;
main()
{
    string word;
    bool lengthOfString;
    cout << "Enter name : ";
    getline( cin , word);
    int idx = 0;
    while(word[idx] != '\0')
    {
        idx = idx + 1;
    }
    if(idx % 2 == 0)
    {
        lengthOfString = true;
        cout << lengthOfString;
    }
    else 
    {
        lengthOfString = false;
        cout << lengthOfString;
    }
}