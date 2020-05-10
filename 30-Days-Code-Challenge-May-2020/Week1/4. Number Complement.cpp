class Solution {
public:
    int findComplement(int num) {

    int output=0 ;

    /*
       Complement_num_str is a string for the complement but it's the inverse of it
       to ease the tracking process.
    */
    string Complement_num_str="";


        while(num!=0){
            if(!(num%2))
                Complement_num_str+='1', num/=2;
            else
                Complement_num_str+='0', num/=2;
        }

       for(int i=0; i<Complement_num_str.size(); i++)
            if(Complement_num_str[i]=='1') output+=pow(2,i);

        return output;
    }
};
