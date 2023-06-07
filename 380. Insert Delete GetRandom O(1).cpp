class RandomizedSet {
public:
    multiset<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val) == s.end()){         // item not present 
            s.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(s.find(val) == s.end()){         //item not present 
           return false;
        }
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        int size = s.size();
        int ra = rand() %size;    // 0 - (size-1)
        auto itr = s.begin();
        advance(itr,ra);
        return *itr;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */