class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueNumber=1;
        int length=nums.size();
        int j=1;
        for(int i=1;i<length;i++){
            if(nums[i-1]!=nums[i]){
                uniqueNumber++;
                nums[j++]=nums[i];
                
            }
        }
        return uniqueNumber;
    }
};
