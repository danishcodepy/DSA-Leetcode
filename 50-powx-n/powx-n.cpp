class Solution {
public:
   long double solve(long double x, long long n) {
        if (n == 0)
            return 1;
        
        if(n < 0){
            return solve(1.0L/x, -n);
        }
        if(n % 2 == 0){
            return solve(x*x,n/2);
        }
        else{
            return x* solve(x*x,n/2);
        }
    }
     double myPow( double x, int n){
        return (double)solve((long double)x, (long long)n);
        
    }
};