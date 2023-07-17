#include <iostream>
#include <vector>
#include <set>
using namespace std;
int minimumNumber(int n, vector<int> &arr)
{
    // Code here
    while (arr.size() != 1)
    {
        if (arr[0] >= arr[1])
        {
            arr[0] = arr[0] - arr[1];
            if (arr[0] == 0)
                arr.erase(arr.begin());
        }
        else
        {
            arr[1] = arr[1] - arr[0];
            if (arr[1] == 0)
                arr.erase(arr.begin() + 1);
        }
    }
    return arr[0];
}
int main()
{
    int n = 3;
    vector<int> arr = {2, 4, 6, 5, 4};

    cout
        << minimumNumber(n, arr);
    return 0;
}