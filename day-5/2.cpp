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
    ListNode* middleNode(ListNode* head) {
          int cnt=0;
          ListNode *head1=head;
          ListNode *head2=head;
        while(head1!=NULL)
        {
          cnt++;
            head1=head1->next;
        }
        if(cnt%2) cnt/=2;
        else cnt=(cnt/2);
        int i=0;
        while(i<cnt){ head2=head2->next; i++;}
        return head2;
    }
};