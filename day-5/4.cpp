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
        ListNode *temp=new ListNode();
        temp->next=head;
        ListNode *x=temp;
        int cnt=0;
        while(x)
        {
            cnt++;
            x=x->next;
        }
        cnt=-1;
       int cnt2=cnt-n;
        int i=0;
        ListNode *pnt=temp;
        while(i<cnt2)
        {
          pnt=pnt->next;
          i++;
        }
        ListNode * del=pnt->next;

        pnt->next=pnt->next->next;
        delete(del);
        return temp->next;

    }
};