#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<long long> smallerSumNaive(int n, vector<int> &arr)
{
    vector<long long> res;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                sum += arr[j];
            }
        }
        res.push_back(sum);
    }
    return res;
}
vector<long long> smallerSum(int n, vector<int> &arr)
{
    vector<long long> res;
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    unordered_map<int, long long> map;
    long long int psum = 0;
    int pre = -1;

    for (int i = 0; i < n; i++)
    {
        if (temp[i] == pre)
        {
            psum += temp[i];
        }
        else
        {
            map[temp[i]] = psum;
            psum += temp[i];
            pre = temp[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        auto it = map.find(arr[i]);
        res.push_back(it->second);
    }

    return res;
}

int main()
{

    vector<int> s = {4, 3, 2, 0, 1, 4, 9};
    vector<long long> res = smallerSum(7, s);
    for (auto x : res)
        cout << x << " ";
}