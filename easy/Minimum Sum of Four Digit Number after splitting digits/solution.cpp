class Solution {
public:
    int minimumSum(int num) {
        vector<int>digits;
        while(num>0){
            int digit = num%10;
            digits.push_back(digit);
            num/=10;    
        }
        sort(digits.begin(),digits.end());
        string n1 = to_string(digits[0])+to_string(digits[3]);
        int new1=stoi(n1);
        string n2 = to_string(digits[1])+to_string(digits[2]);
        int new2=stoi(n2);
        return new1+new2;
    }
};
