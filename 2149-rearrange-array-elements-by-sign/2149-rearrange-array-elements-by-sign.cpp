class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> n;
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                n.push_back(nums[i]);
            }
            else
            {
                p.push_back(nums[i]);
            }
        }
        int k=0;
        int t=0;
        for(int j=0;j<nums.size();j++)
        {
            nums[j]=p[k];
            j++;
            k++;
            nums[j]=n[t];
            t++;
        }
        return nums;
    }
};