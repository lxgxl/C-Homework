#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Ch{
    int count;
    int xuhao;
};

bool cmp(Ch a, Ch b)
{
    if(a.xuhao == 0)
    {
        return true;
    }

    if(a.xuhao < b.xuhao)
    {
        return true;
    }

    return false;
}

int main()
{
    int t = 1;
    Ch a[256];
    char str[1000];
    cin >> str;

    for(int i = 0; i < 256; i++)
    {
        a[i].count = 0;
        a[i].xuhao = 0;
    }

    for(int i = 0; i < strlen(str); i++)
    {
        if(!a[str[i]].count)
        {
            a[str[i]].xuhao = t++;
        }
        a[str[i]].count++;
    }

    for(int i = 1; i < t; i++)
    {
        for(int j = 0; j < 256; j++)
        {
            if(a[j].xuhao == i)
            {
                for(int k = 1; k <= a[j].count; k++)
                {
                    cout << (char)j;
                }
            }
        }
    }

    cout << endl;

    for(int i = 1; i < t; i++)
    {
        for(int j = 0; j < 256; j++)
        {
            if(a[j].xuhao == i)
            {
                cout << (char)j << a[j].count;
            }
        }
    }

    getchar();
    getchar();
    getchar();
    return 0;
}