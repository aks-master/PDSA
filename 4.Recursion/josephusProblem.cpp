#include <bits/stdc++.h>
using namespace std;
int josephousProblem(int n, int k)
{
    if (n == 1)
        return n;
    return (josephousProblem(n - 1, k) + k - 1) % n + 1;
}
int main()
{
    cout << "Enter number of people and K: ";
    int n, k;
    cin >> n >> k;
    cout << josephousProblem(n, k);
    return 0;
}