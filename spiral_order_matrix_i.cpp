vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> res;
	int t=0;int b=A.size();int l=0;int r=A[0].size();
	int dir=0;
	while(t<=b-1 && l<=r-1)
	{
	    if(dir==0)
	    {
	        for(int i=l;i<r;i++)
	        {
	            res.push_back(A[t][i]);
	        }
	        t++;
	    }
	    else if(dir==1)
	    {
	        for(int i=t;i<b;i++)
	        {
	            res.push_back(A[i][r-1]);
	        }
	        r--;
	    }
	    else if(dir==2)
	    {
	        for(int i=r-1;i>=l;i--)
	        {
	            res.push_back(A[b-1][i]);
	        }
	        b--;
	    }
	    else if(dir==3)
	    {
	        for(int i=b-1;i>=t;i--)
	        {
	            res.push_back(A[i][l]);
	        }
	        l++;
	    }
	    dir=(dir+1)%4;
	    
	}
	// DO STUFF HERE AND POPULATE result
	return res;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
