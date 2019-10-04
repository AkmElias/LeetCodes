class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
       // n = 8;
        vector<vector<string>>result;
        vector<string>queens(n,string(n, '.'));
        nQueens(result,queens,0,n);
        return result;
    }
    
void nQueens(vector<vector<string>> &result, vector<string> &queens, int row, int &n){
    
    if(row==n){
        result.push_back(queens);
        return;
    } else{
        
        for(int col = 0;col<n; col++){
            
            if(valid(queens,col,row,n)){
                
                queens[row][col] = 'Q';
                nQueens(result,queens,row+1,n);
                queens[row][col] = '.';
            }
        }
    }
}
    bool valid(vector<string> &queens,int col,int row,int &n){
        
        for(int i = 0;i<n;i++)
            if(queens[i][col]=='Q')
                return false;
        
        for(int j = row-1,i = col-1;j>=0&&i>=0;j--,i--){
            
            if(queens[j][i]=='Q')
                return false;
        }
        for(int i = row-1,j = col+1;i>=0 && j<n;i--,j++){
            if(queens[i][j] == 'Q')
                return false;
        }
        return true;
    }
};
