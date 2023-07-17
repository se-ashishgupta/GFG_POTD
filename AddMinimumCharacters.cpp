#include <iostream>
#include <string>
#include <set>
using namespace std;

int addMinChar(string str)
{
    int start = 0, end = str.length() - 1, res = 0;
    while (start <= end)
    {
        if (str[start] != str[end])
        {
            res++;
            start = 0;
            end = str.length() - 1 - res;
        }
        else
        {
            start++;
            end--;
        }
    }
    return res;
}
int main()
{
    string str = "ABCD";
    cout << addMinChar(str);
    return 0;
}