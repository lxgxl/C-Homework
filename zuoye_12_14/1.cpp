/*1、 题目：模拟车牌识别程序，建立数据库存放车牌号(二维字符数组或指针数组)，
从键盘输入待查车号，在数据库中查询是否存在，如存在输出“通过”，否则输出“非法车辆”!*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n = 2;
    char car[100][10] = {"su·A888", "su·A666"};

    char str[100];
    cout << "请输入待查车牌号" << endl;
    cin >> str;

    bool flag = false;
    for(int i = 0; i < 2; i++)
    {
        if(!strcmp(str, car[i]))
        {
            cout << "通过" << endl;
            flag = true;
            break;
        }
    }
    if(flag == false)
    {
        cout << "非法车辆" << endl;
    }

    getchar();
    getchar();
    return 0;
}