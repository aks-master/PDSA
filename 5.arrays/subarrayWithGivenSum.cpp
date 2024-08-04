#include <bits/stdc++.h>
using namespace std;
pair<int, int> check(int *arr, int n, int sum)
{
    int curr_sum = arr[0], s = 0, e;
    for (e = 1; e < n; e++)
    {
        while (curr_sum > sum && s < e - 1)
        {
            curr_sum -= arr[s++];
        }
        if (curr_sum == sum)
            return make_pair(s, e - 1); // e-1 as e is incremented by loop
        if (e < n)
            curr_sum += arr[e];
    }
    if (curr_sum == sum)
        return make_pair(s, e);
    else
        return make_pair(-1, -1);
}
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    if (!arr)
    {
        cout << "array cannot be allocated.";
        return -1;
    }
    cout << "Enter elements(only non -(ve) numbers): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter desired sum: ";
    int sum;
    cin >> sum;
    pair<int, int> range = check(arr, n, sum);
    if (range.first == -1)
    {
        cout << "Desired subarray sum does not exist.";
    }
    else
    {
        cout << "Desired subarray sum exist from (index) " << range.first << " to " << range.second << ".";
    }
}