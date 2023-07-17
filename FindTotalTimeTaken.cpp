#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int totalTime(int n, vector<int> &arr, vector<int> &time)
{
    int res = 0;
    unordered_set<int> temp;
    temp.insert(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (temp.find(arr[i]) == temp.end())
        {
            temp.insert(arr[i]);
            res += 1;
        }
        else
        {
            res += time[arr[i] - 1];
        }
    }
    return res;
}
int main()
{
    int n = 8;
    vector<int> arr = {6, 6, 1, 8, 1, 1, 3, 1};
    vector<int> time = {8, 4, 1, 5, 2, 8, 9, 3};
    cout << totalTime(n, arr, time);
    return 0;
}
