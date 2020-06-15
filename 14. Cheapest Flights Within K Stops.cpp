class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        
        unordered_map <int, vector<pair<int, int>>> adjmat;
        
//         for(int i=0;i<flights.size();i++)
//         {
//             adjmat[flights[i][0]].push_back({flights[i][1],flights[i][2]});
            
//         }
        for(vector<int>& f : flights)
        {
            adjmat[f[0]].push_back({f[1],f[2]});
        }
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> Q;
        Q.push({0,src,K+1});
        while(!Q.empty())
        {
            vector<int> top=Q.top();
            Q.pop();
            int curdist=top[0];
            int cursrc=top[1];
            int cured=top[2];
            if(cursrc==dst) return curdist;
            if(cured>0)
            {
                for(pair<int,int> & v : adjmat[cursrc])
                {
                    Q.push({curdist+v.second,v.first,cured-1});
                }
            }
        }
        
        return -1;    
    }
};
