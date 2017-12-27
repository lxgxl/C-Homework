#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b > a)
    {
        int t = a;
        a = b;
        b = t;
    }

    int r = a % b;
    while(r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    int c = gcd(a, b);

    cout << c << endl;

    getchar();
    getchar();
    return 0;
}