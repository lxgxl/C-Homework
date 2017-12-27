#include <iostream>

using namespace std;

int Max = 0;
int maxa[10];

void func(int *a, int i)
{
    if(i > 6)
    {
        if(a[1] + a[2] > 0
         && a[1] + a[4] < 2
         && a[1] + a[5] + a[6] == 2
         && a[2] + a[3] != 1
         && a[3] + a[4] == 1
         && (a[4] == 0 && a[5] == 0 || a[4] == 1))
        {
            int sum = 0;
            for(int j = 1; j <= 6; j++)
            {
                sum += a[j];
            }
            if(sum > Max)
            {
                Max = sum;
                for(int j = 1; j <= 6; j++)
                {
                    maxa[j] = a[j];
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
    int a[10] = { 0 };
    func(a, 1);
    
    for(int i = 1; i <= 6; i++)
    {
        cout << maxa[i] << " ";
    }

    getchar();
    return 0;
}