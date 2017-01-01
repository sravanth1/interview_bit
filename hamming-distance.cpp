class Solution {
public:
    int count(int x)
    {
        int cnt=0;
        while(x>0)
        {
            cnt++;
            x=(x&(x-1));
        }
        return cnt;
    }
    int hammingDistance(int x, int y) {
        return count(x^y);
    }
};