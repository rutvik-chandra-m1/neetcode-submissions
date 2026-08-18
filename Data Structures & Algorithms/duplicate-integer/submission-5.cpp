class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> occurence;
        
        for(int num : nums){
            if(!occurence.insert(num).second){
                return true;
            }
        }
        return false;
    }
};