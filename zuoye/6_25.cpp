#include <iostream>

using namespace std;

void func(int x)
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

    for(int i = wei; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int x;
    cin >> x;

    func(x);

    getchar();
    getchar();
    return 0;
}