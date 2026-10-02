class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;

        for(int x : nums){
            answer = answer ^ x;
        }
        return answer;
    }
};