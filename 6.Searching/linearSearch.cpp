#include <bits/stdc++.h>
using namespace std;
int linearSearch(const vector<int> &v, int key)
{
    int n = v.size();
    for (auto i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    vector<int> v(n);
    // cout << v.size();
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter an element to search: ";
    int key;
    cin >> key;
    int idx = linearSearch(v, key);
    if (idx == -1)
    {
        cout << "Element not present.";
    }
    else
    {
        cout << "Element present at index " << idx;
    }
    return 0;
}