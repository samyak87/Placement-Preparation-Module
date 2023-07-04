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
        if(list1==NULL && list2==NULL )return NULL;
        if(list1==NULL ) return list2;
        if(list2==NULL ) return list1;
        ListNode *head=new ListNode();
       ListNode*head2=head;
       if(list1->val<list2->val) head=list1;
       else head=list2;
         ListNode *a=list1,*b=list2;
        while(a!=NULL || b!=NULL)
        {
           if( b==NULL || (a!=NULL && b!=NULL && a->val<b->val) ){
               head2->next=a;
               a=a->next;
                          head2=head2->next;

           }
           else if( a==NULL || (a!=NULL && b!=NULL && a->val>=b->val)){
                head2->next=b;
               b=b->next;
                          head2=head2->next;

           }
           
        }
        return head;
    }
};