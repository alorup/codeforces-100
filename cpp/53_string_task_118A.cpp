#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'; }
int main()
{
    string s;
    if (!(cin >> s))
        return 0;
    for (char &ch : s)
    {
        char c = tolower(ch);
        if (!is_vowel(c))
            cout << '.' << c;
    }
    cout << "\n";
}
