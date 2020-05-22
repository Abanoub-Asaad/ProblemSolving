class Solution {
public:
    
    bool sortinrev(const pair<char,int> &a,  
               const pair<char,int> &b) 
    { 
           return (a.first > b.first); 
    } 
    
    string frequencySort(string s) {
        
        string output="";
        vector<pair<char,int>>v;
        map<char,int>mp;
        map<char,int>::iterator it;
        
        for(int i=0; i<s.size(); i++)
            ++mp[s[i]];
        for(it=mp.begin(); it!=mp.end(); it++)
            v.push_back(make_pair(it->first, it->second));
        
        //The lampda expression for sorting by value in descending order 
        std::sort( v.begin(), v.end(),
               []( const std::pair<char, int> &p1, const std::pair<char, int> &p2 )
               {
                   return ( p1.second > p2.second || 
                          ( !( p2.second > p1.second ) && p1.first < p2.first ) );
               } );
        
        for(int i=0; i<v.size(); i++)
           for(int j=0; j<v[i].second; j++)
               output+=v[i].first;
    
        return output;
    }
    
};

//=========== Another Solution
class Solution {
public:
    
    string frequencySort( string s ) {
	unordered_map<char, int> m;
	for( auto c : s )
		++m[c];

	priority_queue<pair<int, char>> maxHeap;
	for( auto p : m )
		maxHeap.push( { p.second, p.first } );

	string result = "";
	while( !maxHeap.empty() ) {
		auto p = maxHeap.top(); maxHeap.pop();
		while( p.first-- )
			result += p.second;
	}
	return result;
}
    
};