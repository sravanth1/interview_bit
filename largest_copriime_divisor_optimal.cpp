int gcd(int u,int v)
{
    int shift;
    if(u==0) return v;
    if(v==0) return u;
    shift=__builtin_ctz(u | v);
    u>>=__builtin_ctz(u);
    do
    {
        v>>=__builtin_ctz(v);
        if(u>v)
        {
            swap(u,v);
        }
        v=v-u;
    }while(v!=0);
    return u<<shift;
}

int Solution::cpFact(int A, int B) {
    if(gcd(A,B)==1)
    {
        return A;
    }
    while(gcd(A,B)>1)
    {
        A=A/gcd(A,B);
    }
    return A;
}
