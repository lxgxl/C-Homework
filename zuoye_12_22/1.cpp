#include <iostream>

using namespace std;

void check_lunch(int num, int time,int input[], int output[])
{
    int i = 0;
    while(i < num)
    {
        if(input[i] != i % time + 1)
        {
            output[i] = 0;
        }
        else{
            output[i] = input[i];
        }

        i++;
    }
}

int main()
{
    int input[100] = {0};
    int output[100] = {0};
    int num, t;
    cin >> num >> t;
    for(int i = 0; i < num; i++)
    {
        cin >> input[i];
    }

    check_lunch(num, t, input, output);

    for(int i = 0; i < num; i++)
    {
        cout << output[i] << " ";
    }

    getchar();
    getchar();
    return 0;
}