int Solution::strStr(const string &haystack, const string &needle) {
    if (needle[0]=='\0') return 0;
    for(int i=0;i<haystack.length();i++)
    {
        bool ismatch=true;
        for(int j=0;j<needle.length();j++)
        {
            if(haystack[i+j]=='\0') return -1;
            if(haystack[i+j]!=needle[j])
            {
                ismatch=false;
                break;
            }
        }
        if(ismatch)
            return i;
    }
    return -1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
