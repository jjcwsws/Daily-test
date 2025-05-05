class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        ranges::sort(horizontalCut);
        ranges::sort(verticalCut);
        long long ans = 0;
        int i = 0, j = 0;
        while (i < m - 1 || j < n - 1) {
            if (j == n - 1 || i < m - 1 && horizontalCut[i] < verticalCut[j]) {
                ans += horizontalCut[i++] * (n - j); // ��������
            }
            else {
                ans += verticalCut[j++] * (m - i); // ��������
            }
        }
        return ans;
    }
};
