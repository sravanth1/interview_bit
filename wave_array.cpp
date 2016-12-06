vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int temp;
    for(int i=0;i<A.size();i=i+2)
    {
        if(i+1 > A.size()-1)
            continue;
        else
        {
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }
    return A;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
