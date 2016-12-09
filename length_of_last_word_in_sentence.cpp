int Solution::lengthOfLastWord(const string &A) {
    stack <char> s;
    vector <string> z;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==' ')
        {
            string m="";
            while(!s.empty())
            {
                m=s.top()+m;
                s.pop();
            }
            if(m!="")
                z.push_back(m);
        }
        else
            s.push(A[i]);
    }
    string m="";
    while(!s.empty())
    {
        m=s.top()+m;
        s.pop();
    }
    if(m!="")
        z.push_back(m);
    if (z.size()==0)
        return 0;
    return z[z.size()-1].length();
}
