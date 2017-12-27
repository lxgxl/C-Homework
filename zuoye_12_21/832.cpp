#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    char str[4][10][20] = {{"the", "a", "one", "some", "any"},
     {"boy", "girl", "dog", "town", "car"},
     {"drove", "jumped", "ran", "walked", "skipped"},
     {"to", "from", "over", "under", "on"}};

    char sentence[20][100] = { 0 };

    for(int ju = 0; ju < 20; ju++)
    {
        for(int ci = 0; ci < 6; ci++)
        {
            strcat(sentence[ju], str[ci % 4][rand() % 5]);
            strcat(sentence[ju], " ");
        }
        sentence[ju][0] -= ('a' - 'A');
        int t = strlen(sentence[ju]);
        sentence[ju][t - 1] = '.';
        sentence[ju][t] = '\0';
        cout << sentence[ju] << endl;
    }


    getchar();
    getchar();
    return 0;
}