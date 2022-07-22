class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        if(needle.length()>haystack.length()) return -1;
        int n=needle.length();
        for(int i=0;i<haystack.size()-n+1;i++){
            string s=haystack.substr(i,n);
            if(s==needle)
                return i;
        }
        return -1;
    }
};
