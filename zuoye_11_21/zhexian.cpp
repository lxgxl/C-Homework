#include <iostream>

using namespace std;

int main()
{
    int n, x1, x2;
    cin >> n;
    if(n == 1)
    {
        x2 = 2;
    }
    else
    {
        x1 = 2;
        for(int i = 2; i <= n; i++)
        {
            x2 = x1 + 4 * (i - 1) + 1;
            x1 = x2;
        }
    }

    cout << x2 << endl;

    getchar();
    getchar();
    return 0;
}