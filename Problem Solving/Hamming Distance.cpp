//Problem Link : https://leetcode.com/problems/hamming-distance/

using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) {
        
        string xx,yy ;
        int cnt=0;
        
        while(x){
            if(x%2==0){
                xx="0"+xx ;
                x/=2 ;
            }else{
                xx="1"+xx;
                x/=2 ;
            }
                
        }
        while(y){
            if(y%2==0){
                yy="0"+yy ;
                y/=2 ;
            }else{
                yy="1"+yy;
                y/=2 ;
            }
                
        }
        
        int mx=max(xx.size(),yy.size());
        
        if(xx.size()!=mx)
            xx=complete_with_zeroes(xx,mx-xx.size());
        else if(yy.size()!=mx)
            yy=complete_with_zeroes(yy,mx-yy.size());
        
        for(int i=0; i<mx; i++){
            if(xx[i]!=yy[i])
                ++cnt;
        }
        
        cout << xx<<" "<<yy;
        return cnt;
    }
    
    string complete_with_zeroes(string s, int mx){
        
        while(mx--)
            s="0"+s;
        
        return s;
    }
};