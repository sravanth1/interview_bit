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
        if(u > v)
        {
            swap(u,v);
        }
        v=v-u;
    }while(v!=0);
    return u<<shift;
}
int Solution::cpFact(int A, int B) {
    for(int i=A;i>=2;i--)
    {
        if(A%i==0)
        {
            if(gcd(i,B)==1)
                return i;
        }
    }
    return 1;
}
