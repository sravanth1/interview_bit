vector<int> Solution::sieve(int A) {
    vector <int> v;
    if(A<2)
        return v;
    int z[A+1];
    memset(z,0,sizeof z);
    for(int i=2;i<=A;i++)
    {
        if(z[i]==0)
            v.push_back(i);
        for(int j=2*i;j<=A;j+=i)
        {
            z[j]=1;
        }
    }
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
