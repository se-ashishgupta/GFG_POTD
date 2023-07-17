#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int minimumTime(int N, int cur, vector<int> &pos, vector<int> &time)
{
    vector<int> temp;
    for (int i = 0; i < N; i++)
    {
        int element = (abs(pos[i] - cur)) * time[i];
        temp.push_back(element);
    }

    return *min_element(temp.begin(), temp.end());
}
int main()
{
    int n = 2;
    int cur = 1;
    vector<int> pos = {1, 6};
    vector<int> time = {10, 3};

    cout << minimumTime(n, cur, pos, time);

    return 0;
}