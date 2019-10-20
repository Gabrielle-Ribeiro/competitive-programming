#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(const string& s)
{
    size_t N = s.size();

    for (size_t i = 0; i < N/2; ++i)
        if (s[i] != s[N - 1 - i])
            return false;

    return true;
}

int main()
{
    string word;

    cin >> word;

    if(is_palindrome(word))
        cout << "It's palindrome" << endl;
    else
        cout << "It's not palindrome" << endl;

    return 0;
}
