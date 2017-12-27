#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

bool cmp(string s1, string s2)
{
    if(s1 < s2)
    {
        return true;
    }

    return false;
}

int main()
{
    string str[100];
    int i;
    for(i = 0; ; i++)
    {
        cin >> str[i];
        if(str[i].length() == 1 && str[i][0] == '0')
        {
            break;
        }
    }

    sort(str, str + i, cmp);

    for(int j = 0; j < i; j++)
    {
        cout << str[j] << endl;
    }

    getchar();
    getchar();
    return 0;
}