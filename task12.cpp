#include<iostream>
using namespace std;
main()
{
    string word;
    int count = 0;
    cout << "Enter name : ";
    getline( cin , word);
    int idx = 0;
    while(word[idx] != '\0')
    {
        if(word[idx] == 'a' || word[idx] == 'e' || word[idx] == 'i' || word[idx] == 'o' || word[idx] == 'u' )
        {
            count = count + 1;
        }
        idx++;
    }
    cout << "VOWELS ARE : " << count;
}    