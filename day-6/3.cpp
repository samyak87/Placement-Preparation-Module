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
    ListNode* reverseKGroup(ListNode* head, int k) {
      
      if(head==NULL) return NULL;
      ListNode *prev=NULL,*curr=head,*forward=NULL;
      int count=0;

      // checking if there are atleast k elements, if yes do that or return the same order(head)

      ListNode *cursor=head;
      for(int i=0;i<k;i++)
      {
          if(cursor==NULL) return head;
          cursor=cursor->next;
      }

      // reversing the k elements

      while(curr!=NULL && count<k)
      {
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
         count++;
      }

      if(forward) head->next=reverseKGroup(forward,k);

      return prev;
        
    }
};