class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && ind==-1){
                ind=i;
            }
            else if(nums[i]!=0){
                if(ind!=-1){
                    swap(nums[i],nums[ind]);
                    i=ind;
                    ind=-1;
                }
            }
        }
    }
};
