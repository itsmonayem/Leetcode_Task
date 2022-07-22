class Solution {
public:
    bool check_subBox(vector<vector<char>>&board, int a,int b){
        vector<int>v(10,0);
        for(int i=a;i<a+3;i++){
            for(int j=b;j<b+3;j++){
                if(board[i][j]!='.'){
                    int x=(int)board[i][j]-'0';
                    if(v[x]>0)
                        return false;
                    v[x]++;
                }
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
                    //cout<<x<<endl;

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
