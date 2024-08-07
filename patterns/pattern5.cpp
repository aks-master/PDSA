/*
for n=5
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int spaces = n; spaces > i; spaces--)
        {
            cout << " ";
        }
        int cols = 2 * i - 1;
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}