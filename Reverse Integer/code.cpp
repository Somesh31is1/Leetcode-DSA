class Solution {
public:
    int reverse(int x) {
        //1. Create Reverse Variable = 0, keep updating it
        int rev = 0;
        //2. Till x is not processed, keep following instructions
        while(x!=0){
            int digit = x%10; //Extract last digit

            if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev = rev*10 + digit; //Shift to one place ahead, i.e. from units to tens and add digit
            x/=10;

        }
        return rev;
        
    }
};
