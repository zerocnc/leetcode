class Solution {
    public:
        int divide(int dividend, int divisor) {
            if (dividend == INT_MIN && divisor == -1)  // Handle overflow case
                return INT_MAX;
    
            bool negative = (dividend < 0) ^ (divisor < 0); // XOR to determine sign
            long long dvd = abs((long long)dividend);  // Use long long to avoid overflow
            long long dvs = abs((long long)divisor);
    
            int quotient = 0;
            while (dvd >= dvs) {
                long long temp = dvs, multiple = 1;
                while (dvd >= (temp << 1)) { // Double divisor until it exceeds dividend
                    temp <<= 1;
                    multiple <<= 1;
                }
                dvd -= temp;
                quotient += multiple;
            }
    
            return negative ? -quotient : quotient;
        }
    };
    