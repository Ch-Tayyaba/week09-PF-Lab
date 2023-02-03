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
    for(int count = idx ; count >= 0 ; count --)
    {
        cout << word[count];
    }
}    