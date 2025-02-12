class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        d = {}
        for num in nums:
            digit_sum = 0
            for digit in str(num):
                digit_sum += int(digit)
            if digit_sum not in d:
                d[digit_sum] = []
            d[digit_sum].append(num)

        max_sum = -1
        for group in d.values():
            if len(group) > 1:
                group.sort(reverse=True)
                max_sum = max(max_sum, group[0] + group[1])
        return max_sum