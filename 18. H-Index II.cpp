class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        if(citations.size()==0)
            return 0;
        
        int low=0,high=citations.size();
       
            int r=high-1;
            int ans=0;
        while(low<=r)//just binary search if O(n),, A[i]<n-i.,start from end return n-i-1
        {
             int mid=low+(r-low)/2;
            if(citations[mid]<(high-mid))
                low=mid+1;
            else
                r=mid-1;
            
        }
//         while(low<=r)
//         {
//             int mid=low+(r-low)/2;
//              if(high-mid<=citations[mid])
//             {
//                 ans=high-mid;
//                  r=mid-1;
                
//             }
//             else
//             {
//                low=mid+1;
//             }
//         }
           
        
        // return ans;
        return high-low;
    }
};
