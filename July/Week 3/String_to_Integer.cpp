class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int i=0;
        bool isPos=true;
        while(s[i]==' ') i++;
        if(s[i]=='+') i++;
        else if(s[i]=='-'){
            isPos=false;
            i++;
        }
        while(i<s.length() and isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans>=pow(2,31)){
                ans=pow(2,31);
                if(isPos)
                    ans=pow(2,31)-1;
                break;
            }
            i++;
        }
        return isPos?ans:-1*ans;
    }
};
