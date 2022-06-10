class Solution {
    public int maxSubArray(int[] nums) {
        int tillSum = 0;
        int maxSum = Integer.MIN_VALUE;
        
        for(int i=0; i<nums.length; i++){
            tillSum = tillSum + nums[i];
            if(tillSum > maxSum)maxSum = tillSum;
            if(tillSum < 0) tillSum = 0;
        }
        return maxSum;
    }
}