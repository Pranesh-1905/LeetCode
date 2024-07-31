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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode();
        ListNode *current=dummy;
        int c=0;
        while(l1 || l2 ||c){
            int x=l1 ? l1->val  : 0;
            int y=l2 ?l2->val: 0;
            int sum=c+x+y;
            c=floor(sum/10);
            current->next=new ListNode(sum%10);
            current=current->next;
            l1=l1? l1->next:NULL;
            l2=l2? l2->next:NULL;

        } 
        return dummy->next;
    }
};