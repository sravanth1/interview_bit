vector<int> Solution::maxset(vector<int> &A) {
    int max_i=0;int max_j=0;
    long long int curr_sum=0;
    long long int tot_sum=0;
    int cnt=0;
    int i;
    for(i=0;i<A.size();i++)
    {
        if(A[i] >= 0)
        {
            cnt++;
            curr_sum+=A[i];
        }
        else
        {
            if(curr_sum >= tot_sum)
            {
                tot_sum=curr_sum;
                max_j=i;
                max_i=i-cnt;
            }
            curr_sum=0;
            cnt=0;
        }
    }
    if(curr_sum > tot_sum)
    {
        tot_sum=curr_sum;
        max_j=i;
        max_i=i-cnt;
    }
    vector<int> v;
    for(int i=max_i;i<max_j;i++)
    {
        v.push_back(A[i]);
    }
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
