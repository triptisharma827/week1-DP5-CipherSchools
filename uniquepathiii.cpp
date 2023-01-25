class Solution {
public:
int ans =0;
bool issafe(int i, int j, int row, int column)
{
    if(i>=0 && i<row && j>=0 && j<column)
    return true;
    return false;
}

void solve(pair<int,int>& start, pair<int,int>& end, vector<vector<bool>>&visited, vector<vector<int>>& grid, int count, int row, int column)
{
    count--;

    //base case
    if(start==end)
    {
        if(count==0)
        ans++;
        return;
    }

    int startx = start.first;
    int starty = start.second;

    visited[startx][starty] = true;

    int arrx[4] = {0, -1, 0, 1};
    int arry[4] = { 1, 0, -1, 0};

    for(int k=0; k<4; k++)
    {
        int tempx = startx + arrx[k];
        int tempy = starty + arry[k];
        if(issafe(tempx, tempy, row, column) && visited[tempx][tempy]==false)
        {
            pair<int,int> curr = {tempx, tempy};
            solve(curr,end,visited, grid, count, row, column  );
        }
    }
    visited[startx][starty]= false;
}


    int uniquePathsIII(vector<vector<int>>& grid) {
        int row= grid.size();
        int column = grid[0].size();

        pair<int, int> start;
        pair<int, int> end;
        int count =0; //count for empty square

        vector<vector<bool>>visited(row, vector<bool>(column, false));  //visited matrix

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column;j++)
            {
                if(grid[i][j]==1)
                start = {i, j};

                if(grid[i][j] ==2)
                end = {i, j};

                if(grid[i][j]!=-1)
                count++; 

                if(grid[i][j]==-1)
                visited[i][j] = true; //already marking them visited, so we can not go again
            }
        }

        solve(start, end, visited, grid, count, row, column);
        return ans;
        
    }
};