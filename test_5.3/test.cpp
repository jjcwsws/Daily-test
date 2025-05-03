#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };  

class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root)
    {
        auto dfs = [&](this auto&& dfs, ListNode* s, TreeNode* t) -> bool {
            if (s == nullptr)
                return true;

            if (t == nullptr)
                return false;

            return s->val == t->val && (dfs(s->next, t->left) || dfs(s->next, t->right)) ||
                s == head && (dfs(head, t->left) || dfs(head, t->right));
            };

        return dfs(head, root);
    }
};