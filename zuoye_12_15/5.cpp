#include <iostream>

using namespace std;

void func(int *a, int i)
{
    if(i > 3)
    {
        if((a[1]&&a[1]+a[2]+a[3]==2||!a[1]&&a[1]+a[2]+a[3]!=2)
         && (a[2]&&a[1]+a[2]+a[3]==1||!a[2]&&a[1]+a[2]+a[3]!=1)
         && (a[3]&&a[1]+a[2]+a[3]==1||!a[3]&&a[1]+a[2]+a[3]!=1))
        {
            for(int j = 1; j <= 3; j++)
            {
                cout << a[j] << " ";
            }
        }
        return;
    }

    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        func(a, i + 1);
    }
}

int main()
{
    int a[4] = {0};
    func(a, 1);

    getchar();
    return 0;
}