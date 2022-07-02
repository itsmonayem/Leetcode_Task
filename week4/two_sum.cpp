class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>ans(2);
        for(int i=0;i<n;i++)
        {
            int tmp=target-nums[i];
            if(mp[tmp])
            {
                ans[0]=mp[tmp]-1;
                ans[1]=i;
                break;
            }
            mp[nums[i]]=i+1;
        }
        return ans;
    }
};
