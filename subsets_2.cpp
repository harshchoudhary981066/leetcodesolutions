class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& nums,vector<int>& itr,int i){
        ans.push_back(itr);

        for(int j=i;j<nums.size();j++){
            if(j>i and nums[j]==nums[j-1]) continue;
            itr.push_back(nums[j]);
            helper(ans,nums,itr,j+1);
            itr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> itr;
        helper(ans,nums,itr,0);
        return ans;
   
    }
};