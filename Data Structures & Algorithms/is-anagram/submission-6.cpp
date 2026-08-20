class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int> frequency;

        for(char c : s){
            frequency[c]++;
        }

        for(char c : t){
            frequency[c]--;
        }

        for(auto [c,i] : frequency){
            if(i != 0) return false;
        }

        return true;
    }
};
