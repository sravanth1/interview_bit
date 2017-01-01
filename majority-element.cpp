class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_index=0;int cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[maj_index]==nums[i])
                cnt++;
            else
                cnt--;
            if(cnt==0)
            {
                maj_index=i;
                cnt=1;
            }
        }
        int req=nums[maj_index];
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==req)
                count++;
        }
        if(count >(nums.size()/2))
            return nums[maj_index];
        return NULL;
    }
};