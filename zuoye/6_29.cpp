#include <iostream>

using namespace std;

bool isPerfect(int num)
{
    int sum = 0;
    for(int i = 1; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            if(i * i == num || i == 1)
            {
                sum += i;
            }
            else
            {
                sum = sum + i + num / i;
            }
        }
    }

    if(sum == num)
        return true;
    else
        return false;
}

int main()
{
    for(int i = 6; i <= 1000; i++)
    {
        if(isPerfect(i))
        {
            cout << i << endl;
        }
    }

    //getchar();
    getchar();
    return 0;
}