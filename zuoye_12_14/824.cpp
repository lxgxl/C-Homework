#include <iostream>
#include <string.h>

using namespace std;

int a[100] = {0, 37, 2, 6, 4, 89, 8, 10, 12, 68, 45};

//升序排列
void quicksort(int *p, int *q)
{
    if(p >= q)
    {
        return;
    }
    int tp = *p;
    int *l = p, *r = q;

    while(p != q)
    {
        while(*q >= tp && p != q) 
        {
            q--;
        }
        while(*p <= tp && p != q) 
        {
            p++;
        }
        int t = *p;
        *p = *q;
        *q = t;
    }


    if(*l > *p)
    {
        *l = *p;
        *p = tp;
    }

    quicksort(l, p - 1);
    quicksort(p + 1, r);
}

int main()
{
    int n = 10;
    quicksort(a + 1, a + n);

    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    getchar();
    getchar();
    return 0;
}