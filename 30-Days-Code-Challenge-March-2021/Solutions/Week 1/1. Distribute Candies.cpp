class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st;
        for(auto i : candyType) st.insert(i);
        return min(st.size(), candyType.size()/2);
    }
};
