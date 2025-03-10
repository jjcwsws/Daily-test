#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:
    int movesToChessboard(vector<vector<int>>& board) 
    {
        int n = board.size();

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                count += board[i][j];
        }

        if (count != n * n / 2)
            return -1;


    }
};

class Solution 
{
public:
    // 计算最小交换次数
    int min_swap(int n, vector<int>& arr, vector<int>& cnt) 
    {
        int x0 = cnt[1] > cnt[0]; // 如果 n 是偶数，x0 是 0
        int diff = 0;
        for (int i = 0; i < n; i++)
            diff += i % 2 ^ arr[i] ^ x0;

        return n % 2 ? diff / 2 : min(diff, n - diff) / 2;
    }

    int movesToChessboard(vector<vector<int>>& board) 
    {
        int n = board.size();

        vector<int>& first_row = board[0];
        vector<int> first_col(n);

        vector<int> row_cnt(2), col_cnt(2);
        for (int i = 0; i < n; i++) 
        {
            row_cnt[first_row[i]]++; // 统计 0 和 1 的个数
            first_col[i] = board[i][0];
            col_cnt[first_col[i]]++;
        }

        // 第一行，0 和 1 的个数之差不能超过 1
        // 第一列，0 和 1 的个数之差不能超过 1
        if (abs(row_cnt[0] - row_cnt[1]) > 1 
            || abs(col_cnt[0] - col_cnt[1]) > 1) 
            return -1;

        // 每一行和第一行比较，要么完全相同，要么完全不同
        for (auto& row : board)
        {
            bool same = row[0] == first_row[0];
            for (int i = 0; i < n; i++) 
            {
                if ((row[i] == first_row[i]) != same) 
                    return -1;
            }
        }

        return min_swap(n, first_row, row_cnt) + min_swap(n, first_col, col_cnt);
    }
};
