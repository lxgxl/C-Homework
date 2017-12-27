#include <iostream>
#include <string.h>

using namespace std;

void auto_complete(char *str, char *tmp,char *output) 
{
    int len = strlen(tmp);
    char t_str[100];
    strcpy(t_str, str);
    char *p = strtok(t_str, " ");

    while(p)
    {
        bool flag = true;
        for(int i = 0; i < len; i++)
        {
            if(tmp[i] != p[i])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            strcat(output, p);
            strcat(output, " ");
        }

        p = strtok(NULL, " ");
    }
}

int main()
{
    char str[] = "chengdu chongqing jiangsu zhejiang beijing nanjing dongjing";
    char output[100] = {0};
    char tmp[20];
    cin >> tmp;

    auto_complete(str, tmp, output);

    cout << output << endl;

    getchar();
    getchar();
    return 0;
}