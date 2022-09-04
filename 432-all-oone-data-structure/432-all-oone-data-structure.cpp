class AllOne {
public:
    unordered_map<string, int> maps;
    set<pair<int, string>> sets;
    
    AllOne() {
        
    }
    
    void inc(string key) {
        if(maps.find(key) == maps.end())
        {
            maps[key]++;     
        }
        
        //if element is repeated then remove the value stored in set, update the key value and again insert in the set
        else
        {
            sets.erase({maps[key], key});
            maps[key]++;
     
        }
          sets.insert({maps[key], key});
    }
    
    void dec(string key) {
        sets.erase({maps[key], key});
        maps[key]--;
        sets.insert({maps[key], key});
        
        if(maps[key] == 0)
        {
            maps.erase(key);
            sets.erase({maps[key], key});
        }
    }
    
    string getMaxKey() {
        if(sets.size() == 0){
            return "";
        }
        
        //set stores value in proper order
        auto it = sets.rbegin();
        return it -> second;
        
    }
    
    string getMinKey() {
        if(sets.size()==0){
            return "";
        }
        
        auto it = sets.begin();
        return it -> second;
        
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */