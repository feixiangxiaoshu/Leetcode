import heapq
class Solution:
    def smallestK(self, arr: List[int], k: int) -> List[int]:
        if k>len(arr) or k==0:
            return []
        heap = []
        for i in arr[:k]:
            heapq.heappush(heap, -i)
        for i in arr[k:]:
            if i < -heap[0]:
                heapq.heappop(heap)
                heapq.heappush(heap, -i)
        result = []
        for i in range(k):
            result.append(-heapq.heappop(heap))
        return result[::-1]


class Solution:
    def smallestK(self, arr: List[int], k: int) -> List[int]:
        def helper(arr, k, left, right):
            ##### 标准快速排序
            pivot = left
            low, high = left, left+1
            for high in range(left+1, right+1):
                if arr[high] < arr[pivot]:
                    low += 1
                    arr[low], arr[high] = arr[high], arr[low]
            arr[left], arr[low] = arr[low], arr[left]
            ###若当前分块长度不等于目标长度k，则根据情况进行下一步细分
            if low-left+1 < k:
                helper(arr, k-low+left-1, low+1, right)
            elif low-left+1 > k:
                helper(arr, k, left, low-1)
        
        if not arr or not k:
            return []
        helper(arr, k, 0, len(arr)-1)
        return arr[:k]
