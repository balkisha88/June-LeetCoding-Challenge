class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        
      //in quicksort kind of thing but we know 1 is pivot, so take zeropt,twoptr
        //zeroptr all values less than zero and in twoptr all values greater than two
        
        int zeroptr=0,twoptr=nums.size()-1;
        int p=0;  //common pointer to point array
        
        while(p<=twoptr)
        {
            if(nums[p]==2)
            {
                nums[p]=nums[twoptr];
                nums[twoptr]=2;
                twoptr--;
            }
            else if(nums[p]==0)
            {
                nums[p]=nums[zeroptr];
                nums[zeroptr]=0;
                p++;
                zeroptr++;
            }
            else p++;
            
        }
       
        
    }
};
