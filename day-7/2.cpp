/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
        Node *x=head;
        while(x)
        {
            m[x]=new Node(x->val);
            x=x->next;
        }

        x=head;

        while(x)
        {
            m[x]->next=m[x->next];
            m[x]->random=m[x->random];
            x=x->next;
        }
        return m[head];
    }
};