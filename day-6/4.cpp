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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return 1;
        stack<int> st;
        ListNode *head2=head,*head3=head;
        int n=0;
        while(head2!=NULL)
        {
            n++;
            head2=head2->next;
        }

        int i=0;
            while(i<n/2)
            {
                st.push(head3->val);
                head3=head3->next;
                i++;
            }

        if(n&1) head3=head3->next;

         while(head3!=NULL)
         {
         if(!st.empty() && head3 && st.top()!=head3->val) return 0;
         head3=head3->next;
         st.pop();
         }
            
        
        return 1;
    }
};