vector<int> Solution::allFactors(int A) {
    vector <int> v;
    for(int i=1;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            if(i*i==A)
                v.push_back(i);
            else
               { v.push_back(i);v.push_back(A/i);}
        }
    }
    sort(v.begin(),v.end());
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
