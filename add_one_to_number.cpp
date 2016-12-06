//very bad solution but AC
//need to improve this.


vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1;
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]+carry > 9)
        {
            A[i]=0;
            carry=1;
        }
        else
        {
            A[i]+=carry;
            if(A[i]>9)
            {
                A[i]=A[i]%10;
            }
            carry=A[i]/10;
        }
    }
    vector <int> v;
    if(carry > 0)
    {
        v.push_back(1);
    }
    v.insert(v.end(),A.begin(),A.end());
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    vector <int> z;
    for(int i=cnt;i<v.size();i++)
    {
        z.push_back(v[i]);
    }
    return z;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
