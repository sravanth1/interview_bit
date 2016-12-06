// all questions on array missing numbers finding.
//http://algorithmsandme.in/2014/04/curious-case-of-missing-and-repeating-numbers-in-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xo=0;
    int x=0;
    int y=0;
    int n=A.size();
    //xoring with array elements and 1 to n numbers since (same number xor cancels as 1 XOR 1 =0 )
    //hence the final xor will contain both missing and repeated number
    for(int i=0;i<n;i++)
    {
        xo=xo^A[i];
    }
    for(int i=1;i<=n;i++)
    {
        xo=xo^i;
    }
    // find right most bit so as to differentiate the numbers
    int right_bit_set=xo & ~(xo-1);
    //xoring seperately to get both missing and repeated 
    for(int i=0;i<n;i++)
    {
        if(A[i]&right_bit_set)
            x=x^A[i];
        else
            y=y^A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i&right_bit_set)
            x=x^i;
        else
            y=y^i;
    }
    bool z=false;
    //verifying which is repeated so as to insert in order ( given in question interviewbit.com)
    for(int i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            z=true;
            break;
        }
    }
    vector <int> v;
    if(z)
    {
        v.push_back(x);
        v.push_back(y);
    }
    else
    {
        v.push_back(y);
        v.push_back(x);
    }
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
