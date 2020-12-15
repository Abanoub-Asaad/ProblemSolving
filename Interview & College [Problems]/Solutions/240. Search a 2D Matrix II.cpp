//The best approach complexity : O(n+m) 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if(!matrix.size())  
            return false;
        
        int row=0, col=matrix[0].size()-1, n=matrix.size(), m=matrix[0].size();
        while(row<n && col>=0)
        {
            if(matrix[row][col] == target)
                return true;
            (matrix[row][col] > target) ? --col : ++row;
        }
        return false;
    }
};


//Binary Search in each row complexity: O(nlog(m))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        bool ok=false;
        for(int i=0; i<matrix.size(); i++)
        {
            ok=checkNumberInEachRow(matrix[i], matrix[i].size(), target);
            if(ok)
                return ok;
        }
        return ok;
    }
    
    bool checkNumberInEachRow(vector<int>& row, int m, int target)
    {
        int start=0, end=m-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(row[mid]==target)
                return true;
            
            (row[mid]>target) ? end=mid-1 : start = mid+1;
        }
        return false;
    }
};
