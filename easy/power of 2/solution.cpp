class Solution {
public:
    bool isPowerOfTwo(int n) {
        double ans = log2(n);
        if(n==0) return false;
        if(floor(ans)==ans){
            return true;
        }
        else return false;
       
    }
};
