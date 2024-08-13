class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        a = [0]  # Start with the initial altitude of 0
        
        # Build the altitude list by accumulating the gains
        for i in range(len(gain)):
            a.append(a[-1] + gain[i])
        
        return max(a) 
        