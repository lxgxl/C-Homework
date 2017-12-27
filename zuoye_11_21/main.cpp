#include <iostream>

using namespace std;

void han(int x, int y, int t, int n);    // x -> y, t是临时存储点, n是剩余个数

void han(int x, int y, int t, int n)
{
    if(n <= 0)
    {
        return;
    }

    han(x, t, y, n-1);
    cout << x << "->" << y << endl;
    han(t, y, x, n-1);

    return;
}

int main()
{
    int n;
    cout << "请输入层数：";
    cin >> n;

    han(1, 3, 2, n);

    cout << "\n\n按回车结束" << endl;
    cin.ignore(100, '\n');
    getchar();
    return 0;
}