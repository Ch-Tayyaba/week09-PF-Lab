#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter name : ";
    getline( cin , word);
    int idx = 0;
    while(word[idx] != '\0')
    {
        cout << word[idx] << "  " << idx << endl;
        idx ++;
    }
}