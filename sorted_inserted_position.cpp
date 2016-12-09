int Solution::searchInsert(vector<int> &A, int B) {
    int start=0;int end=A.size()-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid] < B)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return start;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
