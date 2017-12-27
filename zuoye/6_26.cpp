#include <iostream>

using namespace std;

int gap_time(int hour, int min, int sec)
{
    return 3600*hour + 60*min + sec;
}

int main()
{
    int hour1, min1, sec1, hour2, min2, sec2;
    cout << "输入第一个时间(hour min sec): ";
    cin >> hour1 >> min1 >> sec1;
    cout << "输入第二个时间(hour min sec): ";
    cin >> hour2 >> min2 >> sec2;

    int gap = abs(gap_time(hour1, min1, sec1) - gap_time(hour2, min2, sec2));

    cout << gap << "s\n";

    getchar();
    getchar();
    return 0;
}