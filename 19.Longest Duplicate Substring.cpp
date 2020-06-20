class Solution {
public:
    string longestDupSubstring(string S) {
        int len = S.length();
       
        string result;
        unordered_set<string_view>s;
        int low = 1, r = len;
        
        while (low <= r) {
            int mid = low + (r-low)/2;
            bool found = false;
            for (int i = 0; i+mid <= len; i++) {
                auto [it, insert] = s.emplace(S.data()+i, mid);
                if (!insert) {
                    found = true;
                    result = move(*it);
                    break;
                }
            }
            
            if (found)
                low = mid+1;
            else
                r = mid-1;
        }
        
        return result;
    }
};
