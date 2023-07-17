#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
vector<int> nearestSmallerTower(vector<int> arr)
{
    int size = arr.size();
    stack<int> temp;
    vector<int> res(size, -1);
    for (int i = size - 1; i >= 0; i--)
    {
        while (temp.size() && arr[temp.top()] >= arr[i])
        {
            temp.pop();
        }
        res[i] = (temp.size()) ? temp.top() : -1;
        temp.push(i);
    }
    while (temp.size())
        temp.pop();

    for (int i = 0; i < size; i++)
    {
        while (temp.size() && arr[temp.top()] >= arr[i])
        {
            temp.pop();
        }
        if (temp.size())
        {
            if (res[i] == -1)
                res[i] = temp.top();
            else
            {
                int index = temp.top();
                if ((i - index) < (res[i] - i))
                    res[i] = index;
                else if ((i - index) == (res[i] - i))
                {
                    if (arr[index] <= arr[res[i]])
                        res[i] = index;
                }
            }
        }
        temp.push(i);
    }

    return res;
}

int main()
{
    vector<int> arr = {1};
    vector<int> res = nearestSmallerTower(arr);
    for (auto x : res)
        cout << x << " ";
}