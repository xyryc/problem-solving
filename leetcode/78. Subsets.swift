    class Solution {
        func subsets(_ nums: [Int]) -> [[Int]] {
            var result: [[Int]] = [[]]   

            for num in nums {
                let newSubsets = result.map { $0 + [num] }
                result += newSubsets    
            }
            return result
        }
    }