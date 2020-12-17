//----------------------O(Nlog(k))
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //Make a HashTable
        unordered_map<int, int>um;
        
        for(auto i : nums)
            um[i]++;
       
        return sortUnorderedMap(um, k);
    }
    
    vector<int> sortUnorderedMap(unordered_map<int, int>& um, int k)
    {
        vector<pair<int, int>>v;
        vector<int> keys;
        
        for(auto& i : um)
            v.push_back(i);
        
        sort(v.begin(), v.end(), cmp);
        
        for(int i=v.size()-1, j=k; i>=0, j>0; i--, j--)
            keys.push_back(v[i].first); 
        
        return keys;
    }
    
    //comparator lampda-function to sort pairs according to second value
    static bool cmp(pair<int, int>& a, pair<int, int>& b) 
    { 
        return a.second < b.second; 
    } 
};
