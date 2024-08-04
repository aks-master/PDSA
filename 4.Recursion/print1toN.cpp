#include <bits/stdc++.h>
using namespace std;
void print1toN(int n)
{
    if (n == 0)
        return;
    print1toN(n - 1);
    cout << n << " ";
}
int main()
{
    cout << "Enter N to print from 1 to N: ";
    int n;
    cin >> n;
    print1toN(n);
    return 0;
}