#include <iostream>
using namespace std;
long long Number_of_Subarrays_of_zeros(int arr[], int n)
{
    long long res = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            temp++;
        }
        else if (arr[i] == 1)
        {
            res = res + ((temp * (temp + 1)) / 2);
            temp = 0;
        }
    }
    res = res + ((temp * (temp + 1)) / 2);
    return res;
}
int main()
{
    int arr[] = {0, 0, 1, 0};
    int n = 4;
    cout << Number_of_Subarrays_of_zeros(arr, n);
    return 0;
}