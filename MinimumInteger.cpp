#include <iostream>
#include <vector>
using namespace std;

long long minimumInteger(long long N, vector<int> &A)
{
    // code here
    long long res = INT32_MAX;
    long long sum = 0;
    for (auto x : A)
        sum = sum + x;

    for (int i = 0; i < N; i++)
    {
        long long curr = A[i];
        if (sum <= N * curr)
        {
            res = min(res, curr);
        }
    }
    return res;
}

int main()
{
    vector<int> s = {1, 3, 2, 6, 52, 26};
    int n = 6;
    cout << minimumInteger(n, s);

    return 0;
}
