class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[i].size();j++){
                
                if(grid[i][j]=='1'){
                    
                    
                    bfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
    
    void bfs(vector<vector<char>>& grid,int i,int j){
        
        queue<pair<int,int>>qu;
        
        qu.push({i,j});
        grid[i][j] = '#';
        while(!qu.empty()){
            
            auto t = qu.front();
            qu.pop();
            
            int x = t.first;
            int y = t.second;
            
            if(x+1<grid.size()&&grid[x+1][y]=='1'){
                qu.push({x+1,y});
                grid[x+1][y] = '#';
            }
            if(x >0 && grid[x - 1][y] == '1') {
                qu.push({ x - 1, y }); 
                grid[x - 1][y] = '#';
            }
            if(y + 1 < grid[x].size() && grid[x][y+1] == '1') {
                qu.push({ x, y+1 }); 
                grid[x][y+1] = '#';
            }
            if(y>0 && grid[x][y-1] == '1') {
                qu.push({ x, y - 1}); 
                grid[x][y-1] = '#';
            }
        }
    }
};
