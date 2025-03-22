class Solution {
    public:
        int reverse(int x) {
    
            long long result = 0;
            long long answer = 0;
            bool negative = false;
    
            if  ( x >= INT_MAX || x <= INT_MIN ){
                return 0;
            }
    
            if ( x < 0 )
            {
                negative = true;
                x *= -1;
            }
    
            while ( x > 0 ){
    
                result = x % 10;
                x /= 10;
                answer *= 10;
                answer += result;
                if (answer >= INT_MAX ){
                    x = 0;
                    answer = 0;
                }
                
            }
    
            if (negative == true){
                answer *= -1;
            }
    
            return answer;
        }
    };


class Solution01 {
    public:
        int reverse(int x) {
            int rev = 0;
            while (x != 0) {
                int pop = x % 10;
                x /= 10;
                if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
                if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
                rev = rev * 10 + pop;
            }
            return rev;
        }
    };

    class Solution02{
        int reverse(int x) {
            long sum = 0;
        
            while (x != 0) {
                int rem = x % 10;
                sum = sum * 10 + rem;
                x = x / 10;
            }
            if (sum > INT_MAX || sum < INT_MIN) {
                return 0;
            }
        
            return (int)sum;
        }
    }

