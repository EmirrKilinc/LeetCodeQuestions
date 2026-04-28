class Solution {
    public int minMoves(int[] nums) {
        int minNum= nums[0];
        for(int num : nums){
            minNum = Math.min(minNum , num);
        }

        int minimumMoves = 0;
        for(int num : nums){
            minimumMoves += (num - minNum);
        }
        return minimumMoves;
    }
}