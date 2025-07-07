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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode*ptr=head;
        while(ptr!=nullptr){
            l++;
            ptr=ptr->next;
        } 
        if (n == l) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int r=l-n;
        ListNode* ptr1=head;
        int c=1;
        while(c<r){
            ptr1=ptr1->next;
            c++;
        }
        ListNode* temp=ptr1->next;
        ptr1->next=ptr1->next->next;
        delete temp;
        return head;
    }
};