#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int minFlips(vector<vector<int>>& grid) 
    {
        int countRow = 0;

        for (int i = 0; i < grid.size(); i++)
        {
            int left = 0, right = grid[0].size() - 1;

            while (left < right)
            {
                if (grid[i][left++] != grid[i][right--])
                    countRow++;
            }
        }

        int countCol = 0;

        for (int j = 0; j < grid[0].size(); j++)
        {
            int left = 0, right = grid.size() - 1;

            while (left < right)
            {
                if (grid[left++][j] != grid[right--][j])
                    countCol++;
            }
        }

        return min(countCol, countRow);
    }
};