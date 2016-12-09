int Solution::isPalindrome(string A) {
    int len=A.length();
    string z;
    for(int i=0;i<len;i++)
    {
        if(A[i]>='0' && A[i]<='9')
            z+=A[i];
        if(A[i] >='a' && A[i]<='z')
            z+=A[i];
        if(A[i] >='A' && A[i] <='Z')
            z+=A[i]-'A'+'a';
    }
   // cout<<z<<endl;
    int i;
    for(i=0;i<=(z.length())/2;i++)
    {
        if(z[i]!=z[z.length()-i-1])
            return 0;
    }
    return 1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
