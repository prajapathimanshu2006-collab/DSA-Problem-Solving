class Solution {
public:
    int smallestNumber(int n, int t) {

        if(n>=1 && n<=9)
        {
            while(1)
            {
                if(n>9)
                {
                    return 10;
                }
                if(n<t)
                {
                    n=t;
                }
                if(n%t==0)
                {
                    return n;
                }
                n++;
            }
        }
        else
        {
            while(1)
            {
                int s = n/10;
                int e = n%10;
                if((s*e)%t==0)
                {
                    return n;
                }
                n++;
            }
            
        }
    }
};