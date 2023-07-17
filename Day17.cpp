// First non - repeating character in a stream

#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

string FirstNonRepeating(string s)
{
    unordered_map<char, int> mp;
    string res = "";
    queue<char> q;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
            q.push(s[i]);

        while (q.empty() == false && mp[q.front()] > 1)
        {
            q.pop();
        }

        if (q.empty())
            res += '#';
        else
            res += q.front();
    }

    return res;
}
int main()
{
    string s = "aabac";
    cout << FirstNonRepeating(s);
    return 0;
}