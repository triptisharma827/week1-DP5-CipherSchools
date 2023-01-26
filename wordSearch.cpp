class Solution {
public:
    bool helper(int i,int j,int m,int n,int p,vector<vector<char>>& board, string word){
        if(p==word.length()) return true;

        if(i>=m||j>=n||i<0||j<0||board[i][j]!=word[p]) return false;
        
            if(board[i][j]==word[p]){
                char temp= word[p];
                board[i][j]='*';
                if(helper(i+1,j,m,n,p+1,board,word)||helper(i,j+1,m,n,p+1,board,word)||helper(i-1,j,m,n,p+1,board,word)||helper(i,j-1,m,n,p+1,board,word)){
                    return true;
                }
                board[i][j]=temp;
                return false;
            }
        return false;

    }
        
    bool exist(vector<vector<char>>& board, string word) {
        int m= board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]&&helper(i,j,m,n,0,board,word)) return 1;
                       
            }
        }   
        return 0;
    }
};