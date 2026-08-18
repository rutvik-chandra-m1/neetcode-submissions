class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> occurence;
        
        for(int num : nums){
            if(occurence.count(num)){
                return true;
            }
            occurence.insert(num);
        }
        return false;
    }
};