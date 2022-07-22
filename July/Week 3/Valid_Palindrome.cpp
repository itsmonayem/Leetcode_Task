class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length();
        while(i<j){
            if(isalnum(s[i]) && isalnum(s[j])){
                s[i]=tolower(s[i]);
                s[j]=tolower(s[j]);
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
            else if(!isalnum(s[i])) i++;
            else j--;
        }
        return true;
    }
};
