class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        gifts.sort()
        n = len(gifts)

        for i in range(k):
            gifts[-1] = int(math.sqrt(gifts[-1]))
            gifts.sort()

        return sum(gifts)