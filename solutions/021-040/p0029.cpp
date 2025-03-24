class Solution {
    public:
        int divide(int dividend, int divisor) {
            // Handle overflow case
            if (dividend == INT_MIN && divisor == -1) 
                return INT_MAX;
    
            // Convert to long to prevent overflow
            long long x = abs((long long)dividend);
            long long y = abs((long long)divisor);
            long long quotient = 0;
    
            while (x >= y) {
                long long temp = y, multiple = 1;
                while (x >= (temp << 1)) {
                    temp <<= 1;
                    multiple <<= 1;
                }
                x -= temp;
                quotient += multiple;
            }
    
            // Handle sign using XOR
            return (dividend < 0) ^ (divisor < 0) ? -quotient : quotient;
        }
    };
    