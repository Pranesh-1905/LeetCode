/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        vector<ListNode*> nodes;
        ListNode* temp = head;
        while (temp) {
            nodes.push_back(temp);
            temp = temp->next;
        }

        int i = 0, j = nodes.size() - 1;
        while (i < j) {
            swap(nodes[i]->val, nodes[j]->val);
            i++;
            j--;
        }

        return head;
    }
};