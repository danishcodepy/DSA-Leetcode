class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit = 0;
        int sum = 0;
        int product = 1;

        while(n > 0){
            digit = n  % 10;
            n = n / 10;

            product  = product * digit;
            sum = sum + digit;
        


        }
        return product - sum;
    }
};