class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> a(nums.begin(),nums.end());
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=nums[0];i<nums[n-1];i++)
        {
            if(a.find(i)==a.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};