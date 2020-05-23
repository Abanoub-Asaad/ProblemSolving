class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        int ptr1=0, ptr2=0, start=0, end=0, ind=0 ;
        vector<vector<int>> output;
        
        while(ptr1 <A.size() && ptr2<B.size())
        {
            start= max(A[ptr1][0],B[ptr2][0]), end=min(A[ptr1][1],B[ptr2][1]);
            if(start<=end)
                output.push_back({start, end}), ++ind;
            
            // Remove the interval with the smallest endpoint
            (A[ptr1][1] < B[ptr2][1]) ? ++ptr1 : ++ptr2 ;
        }

        return output;
    }
};