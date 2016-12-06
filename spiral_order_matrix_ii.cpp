vector<vector<int> > Solution::generateMatrix(int size) {
    vector <vector<int> > v;
    for(int i=0;i<size;i++)
    {
        vector <int> z(size);
        for(int i=0;i<size;i++)
        {
            z[i]=0;
        }
        v.push_back(z);
    }
   // cout<<"done"<<endl;
    int t=0;int l=0;int r=size-1;int b=size-1;
    int dir=0;
    int h=1;
    while(t<=b && l<=r)
    {
        //cout<<t<<endl;
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
                v[t][i]=h;
                h++;
            }
            t++;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            {
                v[i][r]=h;
                h++;
            }
            r--;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            {
                v[b][i]=h;
                h++;
            }
            b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            {
                v[i][l]=h;
                h++;
            }
            l++;
        }
        dir=(dir+1)%4;
    }
    return v;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
