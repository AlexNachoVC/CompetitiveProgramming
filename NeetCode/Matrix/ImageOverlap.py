import collections

class Solution:
    def largestOverlap(self, A: list[list[int]], B: list[list[int]]) -> int:
        d = collections.defaultdict(int)
        a = []
        b = []

        for i in range(len(A)): # store the positions of 1s in images A and B
            for j in range(len(a[0])):
                if (A[i][j] == 1):
                    a.append((i,j))
                if (B[i][j] == 1):
                    b.append((i,j))

        ans = 0
        for t1 in a:
            for t2 in b:
                t3 = (t2[0] - t1[0], t2[1] - t1[1]) # calculate the difference between all points with a 1 in A and B
                d[t3] += 1 # keep track of how many points in A and B correspond to different translations. (so this map, has the time of occurrences of each translation)
                ans = max(ans, d[t3]) # choose the translation that has the most ocurrences
        return ans # that translation gives us the largest possible overlap. because it tells us doing what movement, we can have the most overlaps