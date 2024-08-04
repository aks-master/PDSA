#include <bits/stdc++.h>
using namespace std;
void TOH(int n, string src, string dst, string aux, int &moves)
{
    if (n == 0)
        return;
    TOH(n - 1, src, dst, aux, moves);
    cout << "Move disk " << n << " from " << src << " to " << dst << endl;
    moves++;
    TOH(n - 1, aux, dst, src, moves);
}
int main()
{
    cout << "Enter number of disks: ";
    int n, moves = 0;
    cin >> n;
    TOH(n, "Src", "Dst", "Aux", moves);
    cout << "number of moves: " << moves;
    return 0;
}