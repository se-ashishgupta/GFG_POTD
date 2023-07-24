#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;
// Wifi Range
bool wifiRange(int N, string s, int x)
{
    vector<char> temp;
    for (int i = 0; i < s.length(); i++)
        temp.push_back(s[i]);

    for (int i = 0; i < s.length(); i++)
    {
        if (temp[i] == 1)
        {
        }
    }

    for (auto x : temp)
        cout << x << " ";
}

int main()
{
    int n = 5, x = 1;
    string s = "10010";
    wifiRange(n, s, x);
    return 0;
}
