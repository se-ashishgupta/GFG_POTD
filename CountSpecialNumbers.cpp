#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countSpecialNumbers(vector<int> &arr, int N)
{
    int res = 0;
    int maxElement = *max_element(arr.begin(), arr.end());
    vector<int> count((maxElement + 1), 0);

    for (int i = 0; i < N; i++)
    {
        int x = arr[i];

        for (int j = x; j < count.size(); j += x)
        {
            count[j]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (count[arr[i]] > 2)
            res++;
    }
    return res;
}
int countSpecialNumbersNaive(vector<int> &arr, int N)
{
    // Code here
    sort(arr.begin(), arr.end());
    int res = 0;
    if (N == 1)
        return 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] % arr[j] == 0)
                {
                    res++;
                    break;
                }
            }
        }
        else
        {
            if (arr[i] % arr[i + 1] == 0)
                res++;
        }
    }
    return res;
}
int main()
{
    int N = 4;
    vector<int> arr = {2, 3, 6, 12};
    cout << countSpecialNumbers(arr, N);
    return 0;
}