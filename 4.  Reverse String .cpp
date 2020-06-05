class Solution {
public:
    void swap(char &s1,char &s2)
    {
        char temp=s1;
        s1=s2;
        s2=temp;
    }
    void reverseString(vector<char>& s) {
        
        int first=0;
        int last=s.size()-1;
        
        while(first<last)
        {
            swap(s[first],s[last]);
            first++;
            last--;
        }
        
    }
};
