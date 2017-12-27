#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    char str[100];
    cin >> str;

    char *p = strtok(str, "-");
    cout << p;
    p = strtok(NULL, "-");
    cout << p << endl;

    getchar();
    getchar();
    return 0;
}