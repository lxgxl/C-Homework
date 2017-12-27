#include <iostream>

using namespace std;

int main()
{
    int x, y, n;
    cin >> n;
    x = 1;
    for(; n > 1; n--)
    {
        y = 2 * (x + 1);
        x = y;
    }
    cout << y;

    getchar();
    getchar();
    return 0;
}