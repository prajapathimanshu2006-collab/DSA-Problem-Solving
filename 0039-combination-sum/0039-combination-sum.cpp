class Solution {
public:
    set<vector<int>> s;
    void getallcombination(vector<int>& arr, int target,int i,vector<int> &combination,vector<vector<int>> &ans)
    {
        int n = arr.size();
        if(i==n || target<0)
        {
            return;
        }
        if(target==0)
        {
            if(s.find(combination)==s.end())
            {
                ans.push_back({combination});
                s.insert(combination);
            }
            
            return;
        }
        combination.push_back(arr[i]);
        getallcombination(arr,target-arr[i],i+1,combination,ans);  // single choice
        getallcombination(arr,target-arr[i],i,combination,ans);  // multiple
        combination.pop_back();
        getallcombination(arr,target,i+1,combination,ans); //exclusion

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        getallcombination(arr,target,0,combination,ans);
        return ans;
    }
};