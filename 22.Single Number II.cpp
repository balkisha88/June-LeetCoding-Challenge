class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        int res[32]={0};
        for(int i=0;i<32;i++)
        {
            int countbits=0;
            // for(int j=0;j<nums.size();j++)
            // {
            //     if((nums[j]&1)==1)
            //         countbits+=1;
            //    nums[j]= nums[j]>>1;
            // }
            // res[i]=countbits%3;
            for(int n:nums)
            {
                res[i]+=(n>>i)&1;
               
                
            }
            res[i]%=3;
            result |=(res[i]<<i);
        }
        
        
        return result;
        
    }
};
