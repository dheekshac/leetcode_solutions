class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr;
        vector<int>ans;
        for(auto it: heights){
            arr.push_back(it);
        }
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(arr[i]!=heights[i]){
                ans.push_back(i);
            }
        }
        return ans.size();
    }
};
