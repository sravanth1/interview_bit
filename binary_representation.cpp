string Solution::findDigitsInBinary(int A) {
    string s="";
    if (A ==0 )
        return "0";
    while(A > 0)
    {
        if(A%2==0)
            s="0"+s;
        else
            s="1"+s;
        A=A/2;
    }
    return s;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
