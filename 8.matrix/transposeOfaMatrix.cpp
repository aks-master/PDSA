#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &mat)
{
    int r = mat.size();
    int c = mat[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
}
int main()
{
    cout << "Enter dimention of matrix (nxn): ";
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter elements of matrix:  " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    transpose(mat);
    cout << "transpose of the matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}