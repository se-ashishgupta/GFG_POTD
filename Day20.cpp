// First non - repeating character in a stream

#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

char FirstNonRepeating(string s)
{
    unordered_map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        auto it = mp.find(s[i]);
        if (it != mp.end())
        {
            if (mp[s[i]] == 1)
                return s[i];
        }
    }
    return '$';
}
int main()
{
    string s = "hellh";
    cout << FirstNonRepeating(s);
    return 0;
}
