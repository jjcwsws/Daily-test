#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //�ȰѲ������ļ�����
        int ungrumpy = 0;
        for (int i = 0; i < grumpy.size(); i++)
        {
            if (grumpy[i] == 0)
            {
                ungrumpy += customers[i];
            }
        }

        //����minutes��С�����䶨Ϊ��Χ����customers��һ��Ԫ�ؿ�ʼ��ȡ�÷�Χ��ֵ���
        //�Ƚ�ÿ���÷�Χ��ֵ�ĺͣ��Ķη�Χ�ĺʹ�˵�������������Ҫ����
        //�Ȱѵ�һ����Χ�ĺ������
        int nobreath = 0;
        for (int i = 0; i < minutes; i++)
        {
            nobreath += customers[i] * grumpy[i];
        }

        //�Ƚ�ÿ����Χ�Ĵ�С
        int maxnobreath = nobreath;
        for (int i = minutes; i < grumpy.size(); i++)
        {
            nobreath = nobreath - customers[i - minutes] * grumpy[i - minutes] + customers[i] * grumpy[i];
            maxnobreath = max(maxnobreath, nobreath);
        }

        return ungrumpy + maxnobreath;
    }
};