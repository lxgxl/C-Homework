#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int main()
{
    string str;
    char str1[1000] = { 0 };
    char dst[1000] = { 0 };
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        str1[i] = str[i];
    }

    char *p = strtok(str1, " ");

    while(p)
    {
        strcat(dst, p + 1);
        int len = strlen(dst);
        dst[len] = *p;
        dst[len + 1] = 0;
        strcat(dst, "ay ");
        p = strtok(NULL, " ");
    }

    cout << dst << endl;

    getchar();
    getchar();
    return 0;
}