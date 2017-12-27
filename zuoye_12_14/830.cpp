#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[2][1000];
    cout << "输入两个字符串，进行比较：" << endl;

    cin >> str[0] >> str[1];

    if(strcmp(str[0], str[1]) > 0)
    {
        cout << "str0大于str1" << endl;
    }
    else if(strcmp(str[0], str[1]) < 0)
    {
        cout << "str0小于str1" << endl;
    }
    else
    {
        cout << "str0等于str1" << endl;
    }

    getchar();
    getchar();
    return 0;
}