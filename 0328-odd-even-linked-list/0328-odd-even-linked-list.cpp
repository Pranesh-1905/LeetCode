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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*eh=nullptr,*et=nullptr,*oh=nullptr,*ot=nullptr;
        ListNode*cur=head;
        int c=1;
        while(cur!=nullptr){
            if(c%2==0){
                if(eh==nullptr){
                    eh=et=cur;
                }
                else{
                    et->next=cur;
                    et=cur;
                }
            }
            else{
                if(oh==nullptr){
                    oh=ot=cur;
                }
                else{
                    ot->next=cur;
                    ot=cur;
                }
            }
            cur=cur->next;
            c++;
        }
        if(ot != nullptr) {
            ot->next = eh;
        }
        
        if(et != nullptr) {
            et->next = nullptr;
        }

        return oh; 
    }
};