/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    string z="";
    string m="";
    ListNode* p=A;
    while(p!=NULL)
    {
        z+=(p->val + '0');
        p=p->next;
    }
    ListNode* prev=NULL;
    ListNode* current=A;
    ListNode* temp;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    p=prev;
    while(p!=NULL)
    {
        m+=(p->val+'0');
        p=p->next;
    }
    if(z==m)
        return 1;
    return 0;
}
