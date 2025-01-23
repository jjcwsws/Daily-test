class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode* less, * greater, * cur = pHead;
        //创建两个哨兵节点
        less = (ListNode*)malloc(sizeof(ListNode));
        greater = (ListNode*)malloc(sizeof(ListNode));
        //用small，bigger分别保留哨兵节点
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
        //进行拼接
        greater->next = NULL;//防止环形
        less->next = bigger->next;//链接
        pHead = small->next;//要返回的头结点
        free(small);
        free(bigger);
        return pHead;

    }
};