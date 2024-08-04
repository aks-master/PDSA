#include <bits/stdc++.h>
using namespace std;
void slidingWindowSum(int *arr, int n, int k)
{
    // n size of array, k is window size;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    cout << "sum of window: " << arr[0] << " to " << arr[k - 1] << " = " << sum << endl;
    for (int i = 1; i < (n - k + 1); i++)
    {
        sum += arr[i + k - 1] - arr[i - 1];
        cout << "sum of window: " << arr[i] << " to " << arr[i + k - 1] << " = " << sum << endl;
    }
}
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    if (!arr)
    {
        cout << "Array cannot be allocated";
        return -1;
    }
    cout << "Enter array elemets: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter window size: ";
    int k;
    cin >> k;
    slidingWindowSum(arr, n, k);
    return 0;
}