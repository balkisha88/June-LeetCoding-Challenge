class Solution {
public:
    string getPermutation(int n, int k) {
        
        string input="";
        for (int i=1;i<=n;i++)
            input+=to_string(i);
      
        
        // vector<string> result; // space problem, time limit exceded
//         int len=0;
//         do{
//             result.push_back(input);
//             len++;
//         }while(next_permutation(input.begin(),input.end()) && len!=k);
        
//         return result[k-1];
        
        while(--k && next_permutation(input.begin(),input.end()) ){
            
        }
        return input;
    }
};
