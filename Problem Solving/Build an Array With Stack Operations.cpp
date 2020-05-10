//Problem Link : https://leetcode.com/problems/build-an-array-with-stack-operations/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <int> v ;
        vector <string> tmp ;
        bool flag=0;
        
        for(int i=0; i<n; i++)
            v.push_back(i+1);
       
        for(int i=0, j=0; i<n; i++){
            if(j>=target.size())
                break;
            
            if(target[j]==v[i]){
                if(flag)
                    tmp.push_back("Pop"),tmp.push_back("Push"), j++,flag=0;
                else
                    tmp.push_back("Push"), j++;
            }
            else if(flag)
                tmp.push_back("Pop"),tmp.push_back("Push"),tmp.push_back("Pop"),flag=0;
            else 
                tmp.push_back("Push"), flag=1;
        }
        return tmp;
    }
};