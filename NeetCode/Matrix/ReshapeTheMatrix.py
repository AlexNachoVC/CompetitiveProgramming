class Solution:
    def matrixReshape(self, mat: list[list[int]], r: int, c: int) -> list[list[int]]:
        m, n = len(mat), len(mat[0]) # set variables for the size of the current matrix, m = rows size, n = cols size
        T = r*c # to check current number of values

        if m * n != T: # if the current number of values, is different to the new matrix size its asked, return false, because it isnt possible to reshape
            return mat

        output = [[0] * c for _ in range(r)] # initialize a matrix, of the dimensions asked (used list comprehension in python)
        flattened = [] # initialize an empty array, that will work as a flattened matrix, to simplify the process.

        for row in range(m):    # add each element of the previous matrix, to the flattened one, in order
            for col in range(n):
                flattened.append(mat[row][col])

        k = 0   # initialize a counter, to keep track of the element being added to the reshaped matrix

        for i in range(r):  # fill the matrix, in the new shape that was asked, by doing it in rows range r, and cols range c
            for j in range(c):
                output[i][j] = flattened[k] # place in the correct position, the corresponding element, from the flattened matrix
                k += 1  # update the counter, to move the element that will get placed
        
        return output   # return the output reshaped matrix

        