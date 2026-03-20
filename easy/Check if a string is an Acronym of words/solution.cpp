class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(j==0){
                    ans.push_back(words[i][0]);
                }
                else{
                    continue;
                }
            }
        }
        if(ans==s){
            return true;
        }
        else{
            return false;
        }
    }
};
