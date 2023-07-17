#include <iostream>
using namespace std;

int count(int arr[], int N)
{
    int maxi = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j != i)
            {
                maxi = max(maxi, (arr[i] & arr[j]));
            }
        }
    }
    return maxi;
}

int main()
{

    int N = 4;
    int arr[] = {4, 8, 12, 16};
    cout << (12 & 4);
    return 0;
}