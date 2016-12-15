int Solution::singleNumber(const vector<int> &A) {
    int num=A[0];
    for(int i=1;i<A.size();i++)
    {
        num=num^A[i];
    }
    return num;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
