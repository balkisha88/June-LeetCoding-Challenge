class Solution {
public:
    int numSquares(int n) {
        
        int dp[n+1];
        
        dp[0]=0;
        
        for(int i=1;i<=n;i++)
        {
            dp[i]=i;
            for(int j=1;j*j<=i;j++)
            {
                dp[i]=min(dp[i],1+dp[i-j*j]);
            }
        }
       
        return dp[n];
        
    }
};


With DP , Complexity:n*sqrt(n)

//Another Approach
Complexity:  sqrt(n)
Legenders's 3-square theorem
A natural number can be represented as sum of 3 sqaures of int.
    N=a*a+b*b+c*c
if and only if N is not in form of 4^a(8b+7).. in this case answer will be 4
    
otherwise check for two parts..
    
class Solution {
public:
    int numSquares(int n) {
        if(ceil(sqrt(n))==floor(sqrt(n)))
            return 1;
        while(n%4==0)   //Remove 4^a term
            n/=4;
        
        if(n%8==7)      //check if the no now is in the form of (8b + 7)
            return 4;
        
        for(int i=1;i*i<=n;++i) // ....to check if it can be divided into 2 parts
        {
            int base = sqrt(n-i*i);
            if(base*base==(n-i*i))
                return 2;
        }
        return 3;
    }
};
