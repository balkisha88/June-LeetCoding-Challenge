class Solution {
    vector<int> c_sum;
    int sum;
public:
    Solution(vector<int>& w) {
        sum=0;
        for(int i : w)
        {
            sum+=i;
            c_sum.push_back(sum);
            
        }
        
    }
    
    int pickIndex() {
        
        int r=rand() % sum;
        
        return binarysearch(r+1);
    }
    int binarysearch(int r)
    {
        int lo=0;
        int high=c_sum.size()-1;
        // int mid=high-lo/2;
        while(lo<high)
        {
            int mid=lo+(high-lo)/2;
            if(c_sum[mid]==r)
                return mid;
            else
            {
                if(c_sum[mid]<r)
                    lo=mid+1;
                else
                    high=mid;
            }
        }
        return lo;
    }
        
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
