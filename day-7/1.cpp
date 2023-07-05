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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0){return head;}
         ListNode *head2=head;

         int n=0;
         while(head2!=NULL)
         {
             n++;
             head2=head2->next;
         }
         if(n==k || k%n==0) return head;

         k%=n;

         int n1=n-k;
      

         ListNode* head3=head;
         int i=0;
         while(i<n1-1)
         {
             head3=head3->next;
             i++;
         }
                  ListNode *head4=head3->next;
ListNode *ans=head4;
while(head4->next!=NULL) head4=head4->next;
head4->next=head;
head3->next=NULL;
return ans;
    }
};