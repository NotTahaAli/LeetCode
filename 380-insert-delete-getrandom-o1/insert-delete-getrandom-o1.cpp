class RandomizedSet {
private:
    unordered_map<int, int> vals;
    vector<int> nums;
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if (vals[val]) return false;
        nums.push_back(val);
        vals[val] = nums.size();
        return true;
    }
    
    bool remove(int val) {
        if (vals[val]) {
            vals[nums.back()] = vals[val];
            nums[vals[val]-1] = nums.back();
            nums.pop_back();
            vals.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */