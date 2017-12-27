#include <iostream>

using namespace std;

int func(int x)
{
    int a[10];
    int wei = 0;
    while(x)
    {
        a[wei] = x % 10;
        x /= 10;
        wei++;
    }
    wei--;

    int sum = 0, scale = 1;
    for(int i = wei; i >= 0; i--)
    {
        sum = sum + a[i]*scale;
        scale *= 10;
    }

    return sum;
}

int main()
{
    int x;
    cin >> x;

    int y = func(x);
    cout << y << endl;

    getchar();
    getchar();
    return 0;
}