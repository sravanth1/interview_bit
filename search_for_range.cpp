int binary_1(const vector<int> &A,int B)
{
    int start=0;
    int end=A.size()-1;
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end) /2;
        if(A[mid]==B)
        {
            result=mid;
            end=mid-1;
        }
        else if(A[mid]<B)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return result;
}
int binary_2(const vector<int> &A,int B)
{
    int start=0;
    int end=A.size()-1;
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end) /2;
        if(A[mid]==B)
        {
            result=mid;
            start=mid+1;
        }
        else if(A[mid]<B)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return result;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int start=binary_1(A,B);
    //cout<<start<<endl;
    int end=binary_2(A,B);
    //cout<<end<<endl;
    vector <int> v;
    v.push_back(start);v.push_back(end);
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
