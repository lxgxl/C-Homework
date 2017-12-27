#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

bool cmp(string n1, string n2)
{
    return n1 > n2;
}

int main()
{
    vector<string> name;
    string in_name;
    cout << "输入名字，以0结束" << endl;

    while(1)
    {
        cin >> in_name;
        if(in_name.length() == 1 && in_name[0] == '0')
        {
            break;
        }

        name.push_back(in_name);
    }

    sort(name.begin(), name.end(), cmp);

    vector<string>::iterator it = name.begin();
    vector<string>::iterator it_end = name.end();
    while(it != it_end)
    {
        cout << *it << endl;
        it++;
    }

    getchar();
    getchar();
    return 0;
}