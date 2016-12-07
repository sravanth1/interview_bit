int count_1(const vector <int> &A,int B)
{
    int low=0;int high=A.size()-1;
    int result=-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(A[mid]==B)
        {
            result=mid;
            high=mid-1;
        }
        else if(A[mid] < B)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return result;
}
int count_2(const vector <int> &A,int B)
{
    int low=0;int high=A.size()-1;
    int result=-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(A[mid]==B)
        {
            result=mid;
            low=mid+1;
        }
        else if(A[mid] < B)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return result;
}
int Solution::findCount(const vector<int> &A, int B) {
    int first=count_1(A,B);
    int last=count_2(A,B);
    if(first==-1 && last==-1)
        return 0;
    else 
        return last-first+1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
