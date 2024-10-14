class Solution(object):
    def numPairsDivisibleBy60(self, time):
        remainderCount = [0] * 60 # initialize an array to count ocurrences of remainders
        count = 0

        for t in time: # iterate over each song duration
            remainder = t % 60 # find the remainder of the current duration with 60

            if remainder == 0:  # if remainder == 0, look for another song with remainder 0
                count += remainderCount[0]
            else: 
                count += remainderCount[60 - remainder] # otherwise, look for the complement (60 - remainder)
            
            remainderCount[remainder] += 1 # update the count of the current remainder
        
        return count