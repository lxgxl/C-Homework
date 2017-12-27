#include <iostream>
#include <vector>

using namespace std;

struct point{
    int x;
    int y;
};

vector<point> record;
int count = 0;

 int m = 11, n = 11;
char map[100][100] = 
    {"############",
     "# #        #",
     "# #        #",
     "# #        #",
     "# ##########",
     "#          #",
     "# ##########",
     "# #         ",
     "# ##### ####",
     "# #####    #",
     "#       #  #",
     "############"};

char mark[100][100] = {0};



bool dfs(int i, int j)
{
    point p;
    p.x = i;
    p.y = j;
    if(i > m || i < 0 || j > n || j < 0)
    {
        record.push_back(p);
        return true;
    }
    else if(mark[i][j] || map[i][j] == '#')
    {
        return false;
    }

    mark[i][j] = 1;
    record.push_back(p);
    count++;

    if(dfs(i-1, j)) return true;
    if(dfs(i+1, j)) return true;
    if(dfs(i, j+1)) return true;
    if(dfs(i, j-1)) return true;

    record.pop_back();

    mark[i][j] = 0;
}

int main()
{
    int i = 1, j = 1;
    dfs(i, j);
    
    for(int t = 0; t < record.size(); t++)
    {
        point p = record.at(t);
        cout << "(" << p.x << ',' << p.y << ")" << endl;
    }

    getchar();
    getchar();
    return 0;
}