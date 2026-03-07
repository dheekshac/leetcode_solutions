class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       vector<int>separated;
       for(int i=0;i<nums.size();i++){
         string neeww=to_string(nums[i]);
         for(auto it:neeww){
            separated.push_back(it-'0');
         }
       } 
       return separated;
    }
};
