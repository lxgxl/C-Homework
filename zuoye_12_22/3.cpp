#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int stack[100];
int s_p = 0;

int find_str(char *str)
{
    char temp[][10] = {"if", "then", "(", ")", 
     "switch", "case", "default", "end", "do", "while"};

    for(int i = 0; i < 10; i++)
    {
        if(!strcmp(str, temp[i]))
        {
            return i;
        }
    }

    return -1;
}

void analysis(const char *str,int *num) 
{
    *num = 0;

    //0-3,2-7,8-9
    char temp[][10] = {"if", "then", "(", ")", 
     "switch", "case", "default", "end", "do", "while"};

    //关键字提取
    char key[1000] = {0};

    //分割输入串
    char t_str[1000];
    strcpy(t_str, str);
    char *p = strtok(t_str, " ");

    //提取重组关键字
    while(p)
    {
        int x = find_str(p);
        if(x != -1)
        {
            stack[s_p++] = x;
            strcat(key, p);
            strcat(key, " ");
        }

        p = strtok(NULL, " ");
    }

    //用截取子串的方式获取
    string s_key = key;
    while(1)
    {
        int t_num = *num;
        if(s_key.find("if  then ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("if  then ");
            s_key.replace(pos, 9, " ");
        }
        if(s_key.find("f ( ) then ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("f ( ) then ");
            s_key.replace(pos, 11, " ");
        }
        if(s_key.find("switch case end ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("switch case end ");
            s_key.replace(pos, 16, " ");
        }
        if(s_key.find("switch ( ) case end ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("switch ( ) case end ");
            s_key.replace(pos, 20, " ");
        }
        if(s_key.find("switch ( ) case default end ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("switch ( ) case default end ");
            s_key.replace(pos, 28, " ");
        }
        if(s_key.find("do while ") != string::npos)
        {
            (*num)++;
            int pos = s_key.find("do while ");
            s_key.replace(pos, 9, " ");
        }

        if(t_num == *num)
        {
            break;
        }
    }
}

int main()
{
    int num;
    //char str[1000];

    string t_s;
    getline(cin, t_s);
    const char *str = t_s.c_str();

    analysis(str, &num);

    cout << num << endl;

    getchar();
    getchar();
    return 0;
}