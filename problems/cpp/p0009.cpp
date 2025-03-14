class Solution {
    public:
        bool isPalindrome(int x) {
    
            // Need data structures stack & queue
            std::queue<int> myQ;
            std::stack<int> myS;
    
            bool flag = false;
            bool mF = false;
            
            if ( x >= 0 ){
    
                if ( x == 0 )
                {
                    flag = true;
                }
                
                while ( x > 0 ){
                    int temp = 0;
                    temp = x % 10;
                    x = x / 10;
                    myQ.push(temp);
                    myS.push(temp);
    
                }
    
                while ( myQ.empty() && myS.empty() ){
                    int i;
                    int j;
    
                    i = myQ.front();
                    myQ.pop();
    
                    j = myS.top();
                    myS.pop();
    
                    std::cout << i << ' ' << j << std::endl;
    
                    if ( i != j ){
                        flag = false;
                    }
    
                }
    
            }
    
            return flag;        
    
        }
    };

    class Solution_01 {
        public:
            bool isPalindrome(int x) {
                if (x < 0) {
                    return false;
                }
        
                long reverse = 0;
                int xcopy = x;
        
                while (x > 0) {
                    reverse = (reverse * 10) + (x % 10);
                    x /= 10;
                }
        
                return reverse == xcopy;        
            }
        };