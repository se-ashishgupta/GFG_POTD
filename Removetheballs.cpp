#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int finLength(int n, vector<int> color, vector<int> radius)
{

    stack<int> s1;
    stack<int> s2;
    for (int i = 0; i < n; i++)
    {
        if (s1.empty() && s2.empty())
        {
            s1.push(color[i]);
            s2.push(radius[i]);
        }
        else if (s1.top() == color[i] && s2.top() == radius[i])
        {
            s1.pop();
            s2.pop();
        }
        else
        {
            s1.push(color[i]);
            s2.push(radius[i]);
        }
    }
    return s1.size();
}
int main()
{
    int n = 4;
    vector<int> color = {1, 3, 3, 1};
    vector<int> radius = {2, 5, 5, 2};
    cout << finLength(n, color, radius);
}
