class Solution {
public:
  
    int numTrees(int n) {
        
        
        vector<int> res(n+1,0);
        if(n==0||n==1)
            return 1;
        
        res[0]=1;res[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                res[i]+=res[i-j]*res[j-1];
            }
        }
        
        return res[n];
        
    }
};
