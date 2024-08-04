/*
rope of length n, and a list of cuts [a,b,c], you can cut the rope in length a or b or c.
What is the maximum number of cuts you can make.
There exists a better solution using dynamic programming but this is a recursion based solution.
*/
#include <bits/stdc++.h>
using namespace std;
int maxCuts(int n, int a, int b, int c)
{
    if (n < 0)
        return -1; // cut not possible as wrong cut made.
    if (n == 0)
        return 0; // rope finished.
    int ans = max(maxCuts(n - a, a, b, c), max(maxCuts(n - b, a, b, c), maxCuts(n - c, a, b, c)));
    if (ans == -1)
        return -1;
    return ans + 1;
}
int main()
{
    int n, a, b, c;
    cout << "Enter rope length followed by the lengths of cuts(a,b,c): ";
    cin >> n >> a >> b >> c;
    cout << "maximum cuts possible: " << maxCuts(n, a, b, c);
    return 0;
}
