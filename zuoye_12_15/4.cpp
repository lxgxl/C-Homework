#include <iostream>

using namespace std;

void func(int *a, int i)
{
    if(i > 4)
    {
        if(a[2] + a[4] == 1
         && a[2] + a[3] == 1
         && a[1] + a[2] == 1
         && a[1] + a[2] + a[3] + a[4] == 1)
        {
            for(int j = 1; j <= 4; j++)
            {
                if(a[j])
                {
                    cout << "是" << (char)(j - 1 + 'A') << "偷的" << endl;
                }
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
    int a[5] = {0};
    func(a, 1);

    getchar();
    return 0;
}