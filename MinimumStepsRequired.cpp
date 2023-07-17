#include <iostream>
#include <string>
using namespace std;
int minSteps(string &str)
{
    int size = str.length();
    int ind = 0;
    int currA = 0, currB = 0;
    int consA = 0, consB = 0;
    for (int i = 0; i < size;)
    {
        while (i < size && str[i] == 'a')
        {
            i++;
            currA = 1;
        }
        while (i < size && str[i] == 'b')
        {
            i++;
            currB = 1;
        }
        consA += currA;
        consB += currB;
        currA = 0, currB = 0;
    }
    return min(consA, consB) + 1;
}
using namespace std;
int main()
{
    string str = "aababaa";
    cout << minSteps(str);
    return 0;
}
