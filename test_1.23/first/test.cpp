class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode* less, * greater, * cur = pHead;
        //���������ڱ��ڵ�
        less = (ListNode*)malloc(sizeof(ListNode));
        greater = (ListNode*)malloc(sizeof(ListNode));
        //��small��bigger�ֱ����ڱ��ڵ�
        ListNode* small = less, * bigger = greater;
        while (cur)
        {
            if (cur->val < x)
            {
                less->next = cur;
                less = less->next;
            }
            else
            {
                greater->next = cur;
                greater = greater->next;
            }
            cur = cur->next;
        }
        //����ƴ��
        greater->next = NULL;//��ֹ����
        less->next = bigger->next;//����
        pHead = small->next;//Ҫ���ص�ͷ���
        free(small);
        free(bigger);
        return pHead;

    }
};