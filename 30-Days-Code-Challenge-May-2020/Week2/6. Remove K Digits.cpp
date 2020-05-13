class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k)
            return "0";

        string output="";
        int n=num.size()-k, m=n;
        
        for(int i=0; i<num.size(); ){
            cout<<i<<" "<<num.size()-m+1<<" ";
            char mn=';'; int ind=0;
            
            for(int j=i; j<num.size()-m+1 ; j++){
                if(num[j]<mn)
                    mn=num[j], ind=j;
            }
            
            cout << mn <<"\n";
            output+=mn, i=ind+1, --m;
        }
        
        //identify num of leading zeroes
        int cnt=0;
        for(int i=0; output.size(); i++){
              if(output[i]!='0') break;
              else              ++cnt;
        }
        
         output.erase(0,cnt); //delete all leading zeroes
        
         if(output=="") return "0";
         if(output.size()>n-cnt)
             return (output.substr(0,n-cnt));
         return output  ;
    }
};