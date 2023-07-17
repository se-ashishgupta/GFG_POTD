#include <iostream>
#include <vector>
using namespace std;
#define mod (int)(1e9 + 7)

int Factorial[100001];
int binExpo(int n, int x)
{
    int res = 1;
    while (x > 1)
    {
        if (x % 2 != 0)
            res = (res * 1LL * n) % mod;

        n = (n * 1LL * n) % mod;
        x = x / 2;
    }
    return res;
}
void FactorialFunc()
{
    Factorial[0] = 1;
    for (int i = 1; i <= 100000; i++)
    {
        Factorial[i] = (i * 1LL * Factorial[i - 1]) % mod;
    }
}

int combination(int n, int i)
{

    int nume = Factorial[n];
    int deno = (Factorial[i] * 1LL * Factorial[n - i]) % mod;
    return (nume * 1LL * binExpo(deno, mod - 2)) % mod;
}

bool check(int c, int d, int sum)
{
    while (sum > 0)
    {
        int rem = sum % 10;
        if (rem == c || rem == d)
            sum /= 10;
        else
            return false;
    }
    return true;
}
int bestNumbers(int n, int a, int b, int c, int d)
{
    // code here
    FactorialFunc();
    long long res = 0;
    for (int i = 0; i <= n; i++)
    {
        int sum = i * a + (n - i) * b;
        if (!check(c, d, sum))
            continue;

        res = (res + combination(n, i) % mod) % mod;
    }

    return res;
}
int main()
{
    int n, a, b, c, d;
    n = 2;
    a = 1;
    b = 2;
    c = 3;
    d = 5;
    cout << bestNumbers(n, a, b, c, d);
    // cout << mod;
    return 0;
}
