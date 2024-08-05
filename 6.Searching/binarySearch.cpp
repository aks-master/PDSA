#include <bits/stdc++.h>
using namespace std;
int binarySearch(const vector<int> &v, int beg, int end, int key)
{
    while (beg <= end)
    {

        int mid = beg + (end - beg) / 2;
        if (v[mid] == key)
        {
            return mid;
        }
        else if (v[mid] > key)
        {
            return binarySearch(v, beg, mid - 1, key);
        }
        else
        {
            return binarySearch(v, mid + 1, end, key);
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
    cout << "Enter elements(in non decreasing order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter an element to search: ";
    int key;
    cin >> key;
    int idx = binarySearch(v, 0, v.size() - 1, key);
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