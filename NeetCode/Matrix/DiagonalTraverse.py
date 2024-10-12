class Solution: 
    def findDiagonalOrder(self, mat: list[list[int]]) -> list[int]:
        rows = len(mat)
        cols = len(mat[0])

        res = []

        cur_row = cur_col = 0
        going_up = True # to tell which direction we are going

        while len(res) != rows * cols: # while we havent traversed through all the matrix
            if going_up:
                while cur_row >= 0 and cur_col < cols:  # check bounds
                    res.append(mat[cur_row][cur_col])

                    cur_row -= 1   # move our current position one up and one right
                    cur_col += 1

                if cur_col == cols: # if we have exceeded the columns (right) by one, we need to move two positions down, and one left
                    cur_col -= 1
                    cur_row += 2
                else:               # if we have exceeded the rows (up) by one, we need to move one position down
                    cur_row += 1

                going_up = False # after going all the way posible up, change our flag to going down
            else: 
                while cur_row < rows and cur_col >= 0: # check bounds
                    res.append(mat[cur_row][cur_col])

                    cur_col -= 1    # move our current position one left and one down
                    cur_row += 1
                
                if cur_row == rows: # if we have exceeded the rows (down) by one, we need to move two positions to the right, and one up
                    cur_col += 2
                    cur_row -= 1
                else:               # if we have exceeded the cols (left) by one, we need to move one position right
                    cur_col += 1
                going_up = True     # after going all the way possible down, change our flag to going up

        return res # after we have traversed all the matrix, return the resultant array
    
