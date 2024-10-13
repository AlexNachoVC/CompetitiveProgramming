class Solution:
    def largestLocal(self, grid: list[list[int]]) -> list[list[int]]:
        N = len(grid)   # calculate size matrix row
        res = [[0] * (N - 2) for _ in range(N - 2)] # create a matrix of size N - 2

        for i in range(N - 2): # in this loop, we go "inside" the resultant matrix, meaning, we are going to each place we have to find a local max
            for j in range(N - 2):
                for r in range(i, i + 3): # for each cell we have to fill, we will be looking in its corresponding 3 x 3 matrix in the original matrix 
                    for c in range(j, j + 3):
                        res[i][j] = max(res[i][j], grid[r][c]) # and, assigning to the maximum value cell, the max value between all the ones inside the corresponding 3 x 3  matrix
        return res 
        # return the resulting local max matrix