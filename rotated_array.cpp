int Solution::findMin(const vector<int> &A) {
    int start=0;
    int end=A.size()-1;
    int n=A.size()-1;
    while(start<=end)
    {
        if(A[start] <= A[end])
            return A[start];
        int mid=(start+end)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(A[mid]<=A[next] && A[mid]<=A[prev])
            return A[mid];
        else if(A[mid]<=A[end])
            end=mid-1;
        else if(A[mid] >= A[start])
            start=mid+1;
    }
    return -1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
