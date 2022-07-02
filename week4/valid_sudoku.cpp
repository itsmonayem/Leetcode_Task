class Solution {
public:
    bool check_subBox(vector<vector<char>>&board, int a,int b){
        map<char,int>mp;
        for(int i=a;i<a+3;i++){
            for(int j=b;j<b+3;j++){
                if(board[i][j]!='.' && mp[board[i][j]]>=1)
                    return false;
                mp[board[i][j]]++;
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int vertical[9][10]={0};
        int horizontal[9][10]={0};
        bool check=true;
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int x=(int)board[i][j]-'0';

                    if(horizontal[i][x]!=0){
                        check=false;
                        break;
                    }

                    if(vertical[j][x]!=0){
                        check=false;
                        break;
                    }
                    
                    horizontal[i][x]++;
                    vertical[j][x]++;
                }
            }
        }
        
        for(int i=0;i<9 && check;i+=3){
            for(int j=0;j<9;j+=3){
                if(!check_subBox(board,i,j)){
                    check=false;
                    break;
                }
            }
        }
        
        return check;
    }
};
