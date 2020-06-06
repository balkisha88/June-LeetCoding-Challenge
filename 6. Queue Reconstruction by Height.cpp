//When sorting by shortest height


class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        if(people.size()==0)
            return people;
        
        int m=people.size();
        int n=people[0].size();
        
        vector<vector<int>> result(m,vector<int>(n,-1));
        sort(people.begin(),people.end());
        
        result[people[0][1]][0]=people[0][0];
        result[people[0][1]][1]=people[0][1];
        //result.insert(result.begin(),people[0]);
        
        for(int i=1;i<people.size();i++)
        {
            int val=people[i][1];
            for(int j=0;j<result.size();j++)
            {
                if(val==0 && result[j][0]==-1)
                {
                    //result.insert(result.begin()+j,people[i]);
                    result[j][0]=people[i][0];
                    result[j][1]=people[i][1];
                    break;
                }
                else if(result[j][0]==-1 || result[j][0]==people[i][0])
                    val--;
            }
            
            
        }
        return result;
    }
};



// When sorting by greatest height first in order
7 0
7 1
6 1
5 0
5 2
4 4


class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
       
        
        vector<vector<int>> result;
        
        sort(people.begin(),people.end(),[](const vector<int>& a,const vector<int>& b)
             {
                 return (a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]));
             });
        
        for(int i=0;i<people.size();i++)
        {
            //cout<<people[i][0]<<" "<<people[i][1]<<endl;
            result.insert(result.begin()+people[i][1],people[i]);
        }
       
        
        return result;
    }
};
