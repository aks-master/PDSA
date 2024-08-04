#include <bits/stdc++.h>
using namespace std;
void printNto1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNto1(n - 1);
}
int main()
{
    cout << "Enter N to print from N to 1: ";
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}