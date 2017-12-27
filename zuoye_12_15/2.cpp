#include <iostream>

using namespace std;

int main()
{
    for(int x = 512; ; x++)
    {
        int a;
        if(x % 8 == 1 && x / 8 % 8 == 1 && x / 8 / 8 % 8 == 7)
        {
            a = x / 8 / 8 / 8;
        }
        if(x % 17 == 4 && x / 17 % 17 == 15)
        {
            if(x / 17 / 17 == a * 2)
            {
                cout << x << endl;
                break;
            }
        }
    }

    getchar();
    return 0;
}