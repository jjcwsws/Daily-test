#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //先把不生气的加起来
        int ungrumpy = 0;
        for (int i = 0; i < grumpy.size(); i++)
        {
            if (grumpy[i] == 0)
            {
                ungrumpy += customers[i];
            }
        }

        //根据minutes大小，将其定为范围。从customers第一个元素开始，取该范围个值相加
        //比较每个该范围个值的和，哪段范围的和大，说明在这段区间需要憋气
        //先把第一个范围的和求出来
        int nobreath = 0;
        for (int i = 0; i < minutes; i++)
        {
            nobreath += customers[i] * grumpy[i];
        }

        //比较每个范围的大小
        int maxnobreath = nobreath;
        for (int i = minutes; i < grumpy.size(); i++)
        {
            nobreath = nobreath - customers[i - minutes] * grumpy[i - minutes] + customers[i] * grumpy[i];
            maxnobreath = max(maxnobreath, nobreath);
        }

        return ungrumpy + maxnobreath;
    }
};