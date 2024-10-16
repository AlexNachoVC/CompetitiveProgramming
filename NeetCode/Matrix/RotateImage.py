class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        l, r = 0, len(matrix) - 1

        while l < r:
            for i in range(r - l): # entire row except last element. i.e. l = 0, r = 3; 3 - 0 = 3 iterations
                top, bottom = l, r

                # save the topleft value
                topLeft = matrix[top][l + i]

                # move bottom left into top left 
                matrix[top][l + i] = matrix[bottom - i][l]

                # move bottom right into bottom left
                matrix[bottom - i][l] = matrix[bottom][r - i]

                # move top right into bottom right
                matrix[bottom][r - i] = matrix[top + i][r]

                # move topleft into top right
                matrix[top + i][r] = topLeft

            r -= 1
            l += 1
