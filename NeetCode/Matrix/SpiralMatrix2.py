class Solution:
    def generateMatrix(self, n: int) -> list[list[int]]:
        mat = [[0] * n for _ in range(n)]

        left, right = 0, n - 1
        top, bottom = 0, n - 1 

        val = 1

        while left <= right:
            # fill every val in top row
            for col in range(left, right + 1):
                mat[top][col] = val
                val += 1
            top += 1

            # fill every val in right col
            for row in range(top, bottom + 1):
                mat[row][right] = val
                val += 1
            right -= 1

            # fill every val in bottom row (reverse order)
            for col in range(right, left - 1, -1):
                mat[bottom][col] = val
                val += 1
            bottom -= 1

            # fill every val in the left col (reverse order)
            for row in range(bottom, top - 1, -1):
                mat[row][left] = val
                val += 1
            left += 1

        return mat