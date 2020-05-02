class Solution:
    def printNumbers(self, n: int) -> List[int]:
        if n <= 0: return []
        return [i+1 for i in range(int('9' * n))]