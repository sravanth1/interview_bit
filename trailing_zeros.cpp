int Solution::trailingZeroes(int A) {
    int cnt=0;
    for(int i=5;i<=A;i=i*5)
    {
        cnt+=(A/i);
    }
    return cnt;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
