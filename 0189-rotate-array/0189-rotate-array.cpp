class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return;
        k = k%n;
        vector<int> temp(n-k);
        int j=0;
        for(int x=0;x<n-k;x++)
        {
            temp[x]=nums[x];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=nums[n-k+j];
            j++;
        }
        for(int p=k;p<n;p++)
        {
            nums[p]=temp[p-k];
        }
    }
};