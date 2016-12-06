int max(int a, int b)
{
    if(a>b)
        return a;
    return b;
}
int Solution::maxSubArray(const vector<int> &A) {
    int cur=A[0];
    int tot=A[0];
    for(int i=1;i<A.size();i++)
    {
        cur=max(A[i]+cur,A[i]);
        tot=max(cur,tot);
    }
    return tot;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
