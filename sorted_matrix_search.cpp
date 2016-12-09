
//start with the top rightmost element 
//if equal return
//if greater decrement in row
// if less increment in columnnnnn( ante column lo traverse chyatam)




int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int i=0;int j=A[0].size()-1;
    while(i<A.size() && j>=0)
    {
        if(A[i][j] == B)
            return 1;
        else if(A[i][j] > B )
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
