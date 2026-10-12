class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxSum = nums[0];
      int currSum = nums[0];
      for(int i = 1; i < nums.size(); i++){
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(currSum, maxSum);
      }
      return maxSum;
    }
};