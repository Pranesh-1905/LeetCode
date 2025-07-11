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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* dum=new  ListNode(0);
          ListNode* cur=dum;
          while(list1 && list2){
            if(list1->val>list2->val){
                cur->next=list2;
                list2=list2->next;
            }
            else{
                cur->next=list1;
                list1=list1->next;
            }
            cur=cur->next;
          }

          cur->next=list1? list1:list2;
           ListNode* head=dum->next;
           delete dum;
           return head;

    }
};