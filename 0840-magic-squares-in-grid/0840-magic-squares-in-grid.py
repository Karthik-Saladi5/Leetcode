class Solution(object):
    def numMagicSquaresInside(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        c=0
        for i in range(1,len(grid)-1):
            s=0
            for j in range(1,len(grid[0])-1):
                values = {grid[i-1][j-1], grid[i-1][j], grid[i-1][j+1],
                          grid[i][j-1],   grid[i][j],   grid[i][j+1],
                          grid[i+1][j-1], grid[i+1][j], grid[i+1][j+1]}
                
                if values != {1, 2, 3, 4, 5, 6, 7, 8, 9}:
                    continue
                else:
                    s=grid[i-1][j-1]+grid[i-1][j]+grid[i-1][j+1]
                    if(grid[i][j-1]+grid[i][j]+grid[i][j+1]==s and grid[i+1][j-1]+grid[i+1][j]+grid[i+1][j+1]==s and grid[i-1][j-1]+grid[i][j-1]+grid[i+1][j-1]==s and grid[i-1][j]+grid[i][j]+grid[i+1][j]==s and grid[i-1][j+1]+grid[i][j+1]+grid[i+1][j+1]==s and grid[i-1][j-1]+grid[i][j]+grid[i+1][j+1]==s and grid[i-1][j+1]+grid[i][j]+grid[i+1][j-1]==s):
                        c+=1
        return c