#include <bits/stdc++.h>
using namespace std;
bool checkForPallindrome(string str, int beg, int end)
{
    while (beg <= end)
    {
        if (str[beg] != str[end])
            return false;
        return checkForPallindrome(str, beg + 1, end - 1);
    }
    return true;
}
int main()
{
    cout << "Enter a String: ";
    string str;
    cin >> str;
    if (checkForPallindrome(str, 0, str.length() - 1))
    {
        cout << "It is a pallindrome";
    }
    else
    {
        cout << "It is not a pallindrome";
    }
    return 0;
}