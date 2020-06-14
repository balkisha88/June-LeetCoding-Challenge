class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        vector<int> result;
        if(nums.size()<=1)
            return nums;
             
        vector<int> length(nums.size(),1);
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            
            for(int j=i-1;j>=0;j--)
            {
                
                if(nums[i]%nums[j]==0)
                {
                    length[i]=max(length[i],length[j]+1);
                }
            }
        }
        int max=0,idx;
        for(int i=0;i<length.size();i++)
        {
            if(length[i]>max)
            {
                 max=length[i];
                idx=i;
            }
        }
        cout<<idx<<" "<<max;
        int temp=nums[idx];
        for(int i=idx;i>=0;i--)
        {
            if(temp%nums[i]==0 && length[i]==max)
            {
                result.push_back(nums[i]);
                max--;
                //temp=nums[i];
            }
        }
        
        
        return result;
    }
};
