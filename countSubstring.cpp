#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int countSubstring(string s)
{
    vector<int> v;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 97 && int(s[i]) <= 122)
            v.push_back(-1);
        else
            v.push_back(1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int currSum = 0;
        for (int j = i; j < v.size(); j++)
        {
            currSum += v[j];
            if (currSum == 0)
                res++;
        }
    }
    return res;
}
int main()
{
    string s = "gEEk";
    cout << countSubstring(s);

    return 0;
}