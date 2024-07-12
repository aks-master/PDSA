/*
for n=5
    *
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int spaces = n; spaces > i; spaces--)
        {
            cout << " ";
        }
        int cols = 2 * (i + 1) - 1;
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}