#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool isFrequencyUnique(int n, int arr[])
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int mpSize = mp.size();

    set<int> st;

    for (auto x : mp)
    {
        st.insert(x.second);
    }

    if (st.size() == mpSize)
        return true;
    else
        return false;
}
int main()
{
    int n = 10;
    int arr[n] = {0, -4, -4, 0, -4, -4, -4, 0, 0, 0};
    cout << isFrequencyUnique(n, arr);
    return 0;
}