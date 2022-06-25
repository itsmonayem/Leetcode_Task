class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int tmp=1;
        for(int i=digits.size()-1;i>=0;i--){
            digits[i]=digits[i]+tmp;
            if(digits[i]==10){
                tmp=1;
                digits[i]=0;
            }
            else
                tmp=0;
        }
        if(tmp==1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
