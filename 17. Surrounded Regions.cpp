class Solution {
public:
    void checkboundry(vector<vector<char>>& board,int i,int j)
    {
    if(i< 0 || i >=board.size() || j<0 || j>=board[0].size() || board[i][j]=='X' || board[i][j]=='o' ) return;
        {
            
            board[i][j]='o';
                
// call neighbours if there are more O near this boundry we don't have to change
            checkboundry(board,i-1,j);
            checkboundry(board,i+1,j);
            checkboundry(board,i,j-1);
            checkboundry(board,i,j+1);
             
            
        }
    }
    void solve(vector<vector<char>>& board) {
        
        if(board.size()==0)
            return;
        
        int row=board.size();
        int cols=board[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if( board[i][j]=='O' & (i==0||j==0||i==row-1||j==cols-1))
                {
                    checkboundry(board,i,j);
                    
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if( board[i][j] =='O')
                    board[i][j]='X';
                else if(board[i][j]=='o')
                    board[i][j]='O';
            }
        }
        
    }
};
