class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int j=0;
            for(int i=j+1;i<nums.size();i+=2){
                swap(nums[i],nums[j]);
                j+=2;
            }
            return nums;
        }   
};
