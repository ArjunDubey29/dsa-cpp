#include <bits/stdc++.h>
using namespace std;
int countVowels(string s)
{
    int vowels = 0;
    for (char x : s)
    {
        x = tolower((unsigned char)x);
        if (
            x == 'a' ||
            x == 'e' ||
            x == 'i' ||
            x == 'o' ||
            x == 'u'
        )
        {
            vowels++;
        }
    }
    return vowels;
}
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int count = countVowels(s);
    cout << "Vowels Count: " << count << " Total Character Count: " << s.length();
}