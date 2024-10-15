import collections

class Solution(object):
    def longestPalindrome(self, words):
        m = collections.defaultdict(int) # dictionary where the key is a word, and the value is how many times it appears
        unpaired = ans = 0  # unpaired, counts how many symetric words are currently unpaired. ans keeps the length of the palindrome

        for w in words: # for each word in the input array, we check if it can contribute to the palindrome
            if w[0] == w[1]:    # if both characthers in the word are the same
                if m[w] > 0:    # if this word has appeared before and can form a pair (bigger than 0)
                    unpaired -= 1   # it reduces the unpaired count
                    m[w] -= 1 # removes one ocurrence from the dictionary
                    ans += 4 # and adds for to the length of the palindrome, because we have two 2-letter words that can be added to the palindrome
                else:  # if the word hasnt appeared before 
                    m[w] += 1   # and increases the count of this word in m 
                    unpaired += 1 # it increments unpaired (because we have one more unpaired symetric word)
            else: # if the word is not symetric
                if m[w[::-1]] > 0: # the function checks if its reverse exists in m.  if the reverse exists, it means the word and its reverse can form a palindrome,
                    ans += 4    #   therefore, we add 4 to our length
                    m[w[::-1]] -= 1 # and decrease an ocurrence of the reverse word
                else:   # if the reverse doesnt exist
                    m[w] += 1  #  we increase the count of the current word in m
        if unpaired > 0: # at the end, if we have any remaining unpaired symetric words. 
            ans += 2 # we add 2 to ans, because we can add a symetric word to the center of the palindrome, adding 2 to length
        return ans # finally, we return the length of the palindrome that can be formed
