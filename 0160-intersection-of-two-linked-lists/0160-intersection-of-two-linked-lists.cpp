/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> v1, v2;

        while (headA != nullptr) {
            v1.push_back(headA);
            headA = headA->next;
        }

        while (headB != nullptr) {
            v2.push_back(headB);
            headB = headB->next;
        }

        ListNode* prev = nullptr;
        while (!v1.empty() && !v2.empty()) {
            ListNode* nodeA = v1.back();
            ListNode* nodeB = v2.back();
            v1.pop_back();
            v2.pop_back();

            if (nodeA != nodeB) {
                return prev;
            }
            prev = nodeA;
        }

        return prev;
    }
};