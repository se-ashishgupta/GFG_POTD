#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> makeBeautiful(vector<int> arr)
{
    // code here
    stack<int> s;
    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
            s.push(arr[i]);
        else if ((s.top() >= 0 && arr[i] < 0) || (s.top() < 0 && arr[i] >= 0))
            s.pop();
        else
            s.push(arr[i]);
    }
    while (!s.empty())
    {
        int k = s.top();
        res.push_back(k);
        s.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
vector<int> makeBeautiful1(vector<int> arr)
{

    // code here
    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {
        if (res.size() > 0 && ((res.back() < 0 && arr[i] >= 0) || (res.back() >= 0 && arr[i] < 0)))
            res.pop_back();
        else
            res.push_back(arr[i]);
    }

    return res;
}
int main()
{
    vector<int> s = {-5, 18, -5, 6};
    vector<int> res = makeBeautiful(s);
    for (auto x : res)
        cout << x << " ";
    return 0;
}