#include <bits/stdc++.h>
using namespace std;
pair<int, int> search(const vector<vector<int>> mat, int n, int key)
{

    int i = 0, j = n - 1;
    while (i < n && j > 0)
    {
        if (mat[i][j] == key)
        {
            return make_pair(i, j);
        }
        else if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return make_pair(-1, -1);
}
int main()
{
    cout << "Enter dimention of matrix (nxn): ";
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter elements of matrix in row wise and column wise sorted order: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Enter value to be searched: ";
    int key;
    cin >> key;
    pair<int, int> pos = search(mat, n, key);
    if (pos.first == -1)
    {
        cout << "Element not present.";
    }
    else
    {
        cout << "Element present at " << pos.first + 1 << " row and " << pos.second + 1 << " column.";
    }
    return 0;
}