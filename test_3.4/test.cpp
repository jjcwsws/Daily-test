#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution
{
private:
    int ret;
    vector<string> path;
    vector<bool> main;//主对角线
    vector<bool> sub;//副对角线
    vector<bool> col;//列
    int _n;

public:
    void DFS(int row)
    {
        if (row == _n)
        {
            ret++;
            return;
        }

        for (int i = 0; i < _n; i++)
        {
            if (!col[i] && !main[row - i + _n] && !sub[row + i])
            {
                col[i] = main[row - i + _n] = sub[row + i] = true;
                path[row][i] = 'Q';
                DFS(row + 1);
                col[i] = main[row - i + _n] = sub[row + i] = false;
                path[row][i] = '.';
            }
        }
    }

    int totalNQueens(int n)
    {
        _n = n;
        main.resize(2 * n, false);
        sub.resize(2 * n, false);
        col.resize(n, false);
        path.resize(n, string(n, '.'));

        DFS(0);
        return ret;
    }
};

