class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> b(nums.size());

        int left = 0;   
        int right = nums.size() - 1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                b[left]  = nums[i];
                left++;
            }
            else {
                b[right] = nums[i];
                right--;
            }
        }

        return b;
    }
};