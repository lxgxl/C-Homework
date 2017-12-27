#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if(y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x%y);
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    int ans = gcd(y, x%y);

    cout << ans << endl;

    getchar();
    getchar();
    return 0;
}