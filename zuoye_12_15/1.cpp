#include <iostream>

using namespace std;

bool func(int get, int count, int first)
{
    for(int i = 100; i <= 2000; i++)
    {
        if((i + get) % (9 - count))
        {
            continue;
        }
        int put = (i + get) / (9 - count);

        if(count == 1)
        {
            if(func(put, count + 1, i - put))
            {
                cout << "老" << count << "有" << i << "个" << endl;
                return true;
            }
        }
        else if(count == 6)
        {
            if(put + first == 420 && i + get - put == 420)
            {
                cout << "老" << count << "有" << i << "个" << endl;
                return true;
            }
        }
        else if(i + get - put == 420)
        {
            if(func(put, count + 1, first))
            {
                cout << "老" << count << "有" << i << "个" << endl;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    func(0, 1, 0);

    getchar();
    return 0;
}