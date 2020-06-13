class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> v;
    unordered_map<int,int> mp;
    RandomizedSet() {
        
        mp.clear();
        v.clear();
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
        if(mp.find(val)==mp.end())
        {
            v.push_back(val);
            mp[val]=v.size()-1; 
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
         if(mp.find(val)!=mp.end())
        {
             int index=mp[val];
             // int temp=v[index];
             // v[index]=v[v.size()-1];
             // v[v.size()-1]=temp;
             v[index]=v[v.size()-1];
             v.pop_back();
             mp[v[index]]=index;
             mp.erase(val);
             return true;
         }
        return false;
        
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        
        int index=rand()%(v.size());
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
