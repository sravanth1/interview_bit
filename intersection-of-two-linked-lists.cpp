/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    int len_A=0;
    int len_B=0;
    ListNode* p=A;
    ListNode* q=B;
    while(p!=NULL)
    {
        p=p->next;
        len_A++;
    }
    while(q!=NULL)
    {
        q=q->next;
        len_B++;
    }
    int d=abs(len_A-len_B);
    p=A;
    q=B;
    if(len_A > len_B)
    {
        while(d--)
        {
            p=p->next;
        }
    }
    else
    {
        while(d--)
        {
            q=q->next;
        }
    }
    while(p!=q)
    {
        p=p->next;
        q=q->next;
    }
    return p;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
