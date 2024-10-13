class Solution:
    def transpose(self, matrix: list[list[int]]) -> list[list[int]]:
        rows, cols = len(matrix), len(matrix[0]) # get the size of the rows and cols of the original matria=x

        res = [[0] * rows for _ in range(cols)] # create a new matrix, but reverse the sizes, new rows = old cols, new cols = old rows

        for r in range(rows):   
            for c in range(cols):
                res[c][r] = matrix[r][c] # loop through all the matrix, and "swap" indices, the old matrix[r][c] gets passed to the res as res[c][r]

        return res # output transposed matrix