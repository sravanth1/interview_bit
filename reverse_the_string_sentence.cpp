void Solution::reverseWords(string &A) {
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
    string l="";
    for(int i=0;i<z.size();i++)
    {
        if(i!=z.size()-1)
            l+=z[z.size()-i-1]+" ";
        else
            l+=z[z.size()-i-1];
    }
    A=l;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
