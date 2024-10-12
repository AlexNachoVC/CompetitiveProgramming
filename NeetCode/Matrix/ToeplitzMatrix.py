class Solution:
    def isToeplitzMatrix(self, matrix: list[list[int]]) -> bool:
        for i in range(len(matrix) - 1): # loop through the entire matrix, the range is len - 1 to prevent from going out of bounds
            for j in range(len(matrix[0]) - 1): # that way, we dont check, the right upmost corner, neither the left down corner. which doesnt have comparisons
                if matrix[i][j] != matrix[i + 1][j + 1]: # we check if the next element in the diagonal is the same
                    return False # if not, return false
        return True # if all the diagonals were right. return true