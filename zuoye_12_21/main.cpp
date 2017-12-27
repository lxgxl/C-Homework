#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

struct word{
    string w;
    int count;
};

int main()
{
    word a[100];
    int n = 0;
    while(1)
    {
        string str;
        cin >> str;
        if(str.length() == 1 && str[0] == '0')
        {
            break;
        }
        
        bool flag = true;
        for(int i = 1; i <= n; i++)
        {
            if(a[i].w == str)
            {
                a[i].count++;
                flag = false;
            }
        }

        if(flag)
        {
            n++;
            a[n].w = str;
            a[n].count++;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << a[i].w << "\t" << a[i].count << endl;
    }

    getchar();
    getchar();
    return 0;
}