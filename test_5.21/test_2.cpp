class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int m = bit_width((unsigned)ranges::max(candidates));
        int ans = 0;
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int x : candidates) {
                cnt += x >> i & 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
