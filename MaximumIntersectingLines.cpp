#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxIntersections(vector<vector<int>> lines, int N)
{
    // Code here,
    // int res = 0;
    sort(lines.begin(), lines.end());
    int minNo = lines[0][0];
    int maxNo = lines[N - 1][1];

    // for (int i = minNo; i <= maxNo; i++)
    // {
    //     int curr = 0;
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (i >= lines[j][0] && i <= lines[j][1])
    //             curr++;
    //     }
    //     res = max(res, curr);
    // }
    // return res;
    
    
    
}

int main()
{

    vector<vector<int>> lines = {{4, 9}, {7, 9}, {9, 10}};
    cout << maxIntersections(lines, 3);
    return 0;
}