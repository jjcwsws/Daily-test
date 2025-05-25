class Solution
{
public:
    int minimumCoins(vector<int>& prices) 
    {
        int n = prices.size();
        deque<pair<int, int>> q;
        q.emplace_front(n + 1, 0); // �ڱ�
        for (int i = n; i > 0; i--)
        {
            while (q.back().first > i * 2 + 1) 
                q.pop_back();

            int f = prices[i - 1] + q.back().second;
            while (f <= q.front().second)
                q.pop_front();

            q.emplace_front(i, f); // ��߽��봰��
        }
        return q.front().second;
    }
};
