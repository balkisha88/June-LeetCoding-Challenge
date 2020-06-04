class Solution {
public:
     struct Compare
    {
        bool operator()(vector<int> &a,vector<int> &b)
        { return abs(a[0]-a[1])>abs(b[0]-b[1]);}
        
    };
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int A=0,B=0,sum=0;
        sort(costs.begin(),costs.end(),Compare());
        for(int i=0;i<costs.size();i++)
        {
            cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
            if((costs[i][0]<=costs[i][1] && A< (costs.size()/2) ) || B==(costs.size()/2))
            {
                A++;
                sum+=costs[i][0];
            }
            else
            {
                B++;
                sum+=costs[i][1];
            }
                
            
        }
        return sum;
        
    }
};
