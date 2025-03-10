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
    // ������С��������
    int min_swap(int n, vector<int>& arr, vector<int>& cnt) 
    {
        int x0 = cnt[1] > cnt[0]; // ��� n ��ż����x0 �� 0
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
            row_cnt[first_row[i]]++; // ͳ�� 0 �� 1 �ĸ���
            first_col[i] = board[i][0];
            col_cnt[first_col[i]]++;
        }

        // ��һ�У�0 �� 1 �ĸ���֮��ܳ��� 1
        // ��һ�У�0 �� 1 �ĸ���֮��ܳ��� 1
        if (abs(row_cnt[0] - row_cnt[1]) > 1 
            || abs(col_cnt[0] - col_cnt[1]) > 1) 
            return -1;

        // ÿһ�к͵�һ�бȽϣ�Ҫô��ȫ��ͬ��Ҫô��ȫ��ͬ
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
