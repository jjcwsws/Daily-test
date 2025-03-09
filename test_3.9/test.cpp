#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int numRookCaptures(vector<vector<char>>& board) 
    {
        pair<int, int> pos;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 'R')
                {
                    pos = { i, j };
                    break;
                }
            }
        }

        int ans = 0, count = 0;
        for (int i = 0; i < pos.first; i++)
        {
            if (board[i][pos.second] == 'p')
                count = 1;
            else if (board[i][pos.second] == 'B')
                count = 0;
        }
        ans += count;

        count = 0;
        for (int i = board.size() - 1; i > pos.first; i--)
        {
            if (board[i][pos.second] == 'p')
                count = 1;
            else if (board[i][pos.second] == 'B')
                count = 0;
        }
        ans += count;

        count = 0;
        for (int i = 0; i < pos.second; i++)
        {
            if (board[pos.first][i] == 'p')
                count = 1;
            else if (board[pos.first][i] == 'B')
                count = 0;
        }
        ans += count;

        count = 0;
        for (int i = board[0].size() - 1; i > pos.second; i--)
        {
            if (board[pos.first][i] == 'p')
                count = 1;
            else if (board[pos.first][i] == 'B')
                count = 0;
        }
        ans += count;

        return ans;
    }
};