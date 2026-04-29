#include<cmath>
#include<climits>
class Solution {
public:
    int divide(int dividend, int divisor) {

        //1. Division -- Repeated Subtraction
        if(divisor == 0){
            return INT_MAX;
        }
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX; // as -2^31/-1 = 2^31 but INT_MAX = 2^31-1 so overflow, hence 2^31-1
        }
        if(divisor == 1){
            return dividend;
        } //Handles both cases, if dividend = INT_MAX, divisor = 1 and divisor = -1

        bool sign = (dividend<0)^(divisor<0);

        long long n = std::abs((long long)dividend);
        long long d = std::abs((long long)divisor);

        int quotient = 0;
        while(n>=d){
            n-=d;
            quotient++;
        }

       return sign? -quotient : quotient;




        
    }
};
