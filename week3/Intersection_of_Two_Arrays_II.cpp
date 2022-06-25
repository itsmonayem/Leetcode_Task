class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp,mp2;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]>=1 && mp[nums2[i]]!=mp2[nums2[i]]){
                v.push_back(nums2[i]);
                mp2[nums2[i]]++;
            }
        }
        return v;
    }
};
