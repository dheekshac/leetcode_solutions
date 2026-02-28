class Solution {
public:
    string removeTrailingZeros(string num) {
        string cat="";
        int index=0;
        for(int i=num.length()-1;i>=0;i--){
            
            if(num[i]!='0'){
                index=i;
                break;
            }
        }
        for(int i=0;i<=index;i++){
            cat.push_back(num[i]);
        }
        return cat;
    }
};
