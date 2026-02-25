class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>arr;
        for(int i=1;i<=1000;i++){
            if(a%i==0&&b%i==0){
                arr.push_back(i);
            }
        }
        return arr.size();
    }
};
