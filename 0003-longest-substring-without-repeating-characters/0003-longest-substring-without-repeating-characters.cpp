class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m;
        int count =0;
        int ans=0;
        int j=0;
            for(int i=j;i<s.length();i++)
            {
                if(m.find(s[i])!=m.end())
                {
                    ans = max(ans,count);
                    m.erase(s[j]);
                    j++;
                    i--;
                    count--;
                }
                else
                {
                    count++;
                    m.insert(s[i]);
                    ans = max(ans,count);
                }
            }
            ans = max(ans,count);
        return ans;
    }
};