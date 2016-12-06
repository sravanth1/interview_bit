
//hashing
//use an array of n+1 size so as to hash if the 1<=i<=n is present in given vector

int Solution::firstMissingPositive(vector<int> &v) {
    bool a[v.size()+1];
    memset(a,false,sizeof a);
    for(int i=0;i<v.size();i++)
    {
        if(v[i] > 0&& v[i] <= v.size())
            a[v[i]]=true;
    }
    int i=0;
    for(i=1;i<=v.size();++i)
    {
        if(!a[i])
            return i;
    }
    return i;
}
