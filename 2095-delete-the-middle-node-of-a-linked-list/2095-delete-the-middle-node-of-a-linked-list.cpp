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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return nullptr;   
        }
        ListNode* cur=head;
        int l=0;
        while(cur!=nullptr){
            l++;
            cur=cur->next;
        }
        ListNode* temp=head;
        int mid=l/2;
        while(--mid){
            temp=temp->next;
        }
        ListNode*d=temp->next;
        temp->next=temp->next->next;
        delete d;
        return head;
    }
};