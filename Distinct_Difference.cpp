#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> getDistinctDifference(int n, vector<int> &arr)
{
    vector<int> res(n), l(n), r(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        l[i] = s.size();
        s.insert(arr[i]);
    }
    s.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        r[i] = s.size();
        s.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res[i] = l[i] - r[i];
    }

    return res;
}

int main()
{
    int n = 4;
    vector<int> v = {4, 4, 3, 3};
    vector<int> res = getDistinctDifference(n, v);
    for (auto x : res)
        cout << x << " ";
    return 0;
}