class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        sort(a.begin(),a.end());
        int count=0;
        int max = 0;
        if(a.size()==0)
        {
            return 0;
        }
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1]+1==a[i])
            {
                count++;
            }
            else
            {
                if(a[i-1]==a[i])
                {
                    continue;
                }
                else if(count>max)
                {
                    max = count;
                }
                count=0;
            }
        }
        if(count>max)
        {
            max = count;
        }
        return max+1;
    }
};