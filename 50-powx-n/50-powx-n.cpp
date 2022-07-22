class Solution {
public:
    double helper(double x, long long n) {
        if(x == 0) {
            return 0;
        }
        
        if(n == 0) {
            return 1;
        }
        
        double res = helper(x * x, n/2);
        
        if(n % 2 == 1){
            return res*x;
        }
        
        return res;
    }

    
    double myPow(double x, int n) {
        long long nn = labs(n);
        double res = helper(x, nn);
        if(n >= 0) {
            return res;
        }
        
        return 1/res;
    }
};