class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> mp;

    for (char i : s)
        mp[i]++;

    if (t.size() != s.size())
        return false;

    for (char i : t)
    {
        mp[i]--;
        if (mp[i] < 0)
            return false;
    }

    return true;

    }
};
