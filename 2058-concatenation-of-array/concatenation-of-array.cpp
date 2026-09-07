class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int newLen = 2 * n;
        vector<int>ans(newLen);

        for(int i = 0; i < n; i++){
            ans[i]  = nums[i];
        }
        for(int i = 0; i < n; i++){
            ans[i + n] = nums[i];

        }
        return ans;
    }
};