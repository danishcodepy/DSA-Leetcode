class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>b(nums.size());
        int left = 0;
        int right = 1;

        for(int i =0; i < nums.size(); i++)
            {
            if(nums[i] % 2 ==0)
            {
                b[left] = nums[i];
                left  = left + 2;

            }
            else
            {
                b[right] = nums[i];
                right = right + 2;
            }
        }
        return b;
    }
};