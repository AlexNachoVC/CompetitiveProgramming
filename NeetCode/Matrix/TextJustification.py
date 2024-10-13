class Solution:
    def fullJustify(self, words: list[str], maxWidth: int) -> list[str]:
        res = []
        line, length = [], 0
        i = 0

        while i < len(words): # loop through the entire input 
            # Line complete 
            if length + len(line) + len(words[i]) > maxWidth: # we check if by adding the next word, we pass the maxWidth
                extra_space = maxWidth - length # we get the extra space available, by subtracting the current length to the maxwidth

                spaces = extra_space // max(1, len(line) - 1) # we calculate the spaces this way, because we only put spaces between words, not after the last one, or before the first one
                                                              # if the length of the line is one, we would get a division by 0, so we use a max between one and length, so that if the length is one, we use 1
                remainder = extra_space % max(1, len(line) - 1) # calculate the number of spaces we would need to add if the spaces are not even. this will be distributed in a greedy way

                for j in range(max(len(line) - 1)): # we loop through each word in a line, to place spaces between words. the minus one is to not put spaces after the last one. We also take care of if the length == 1 with a max, to left justify it
                    line[j] += " " * spaces # we take the current word, and add the needed spaces
                    if remainder: # if we have a remainder, because spaces were not even
                        line[j] == " " # we take one extra space from the remainder, and append it to the end of that word
                        remainder -= 1 # decrement remainder

                res.append("".join(line)) # join the words from the line, and append them to the result
                line, length = [], 0 # reset line and length

            # line is not complete
            line.append(words[i]) # append current word to the line
            length += len(words[i]) # update the length of current line, by adding the length of the current word (not including spaces)
            i += 1 # increment word pointer, to go to the next word
        
        # handling last line
        last_line = " ".join(line) # add at least one space between each word
        trail_space = maxWidth - len(last_line) # if we have extra space leftover, we calculate it by subtracting maxwidth to the length of the last line
        res.append(last_line + " " * trail_space) # append to the result array the last line, plus the trail space if corresponding
         
        return res # return the result array