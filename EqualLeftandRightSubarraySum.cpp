#include <iostream>
#include <vector>
#include <set>
using namespace std;
int equalSum(vector<int> &A)
{
    // code here
    int N = A.size();
    int rightSum = 0;
    for (auto x : A)
        rightSum += x;

    int leftSum = 0;
    for (int i = 0; i < N; i++)
    {
        rightSum -= A[i];
        if (leftSum == rightSum)
            return i + 1;
        else
            leftSum += A[i];
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 3};
    cout << equalSum(v);
    return 0;
}