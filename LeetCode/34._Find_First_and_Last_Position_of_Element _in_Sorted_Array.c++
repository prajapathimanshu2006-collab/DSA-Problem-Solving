class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st=0,end=n-1;
        vector<int> ans = {-1,-1};
        if(nums.size()==1 && nums[0]==target)
        {
            ans.clear();
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        while(st<=end)
        {
            int mid = st+(end-st)/2;
            if(target>nums[mid])
            {
                st=mid+1;
            }
            else if(target<nums[mid])
            {
                end = mid-1;
            }
            else
            {
                int ind = mid;
                ans.clear();
                while(mid>=0 && nums[mid]==target)
                {
                    mid--;
                }
                ans.push_back(mid+1);
                while(ind<nums.size() && nums[ind]==target)
                {
                    ind++;
                }
                ans.push_back(ind-1);
                return ans;
            }
        }
        return ans;
    }
};