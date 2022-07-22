class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        k%=len;
        for(int i=0,j=len-k-1;i<=j;i++,j--){
            swap(nums[i],nums[j]);
        }
        for(int i=len-k,j=len-1;i<=j;i++,j--){
            swap(nums[i],nums[j]);
        }
        for(int i=0,j=len-1;i<=j;i++,j--){
            swap(nums[i],nums[j]);
        }
    }
};
