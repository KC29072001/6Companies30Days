
class Solution {
public:
    void  combinations(int k,int idx, int n,vector<int>ls,vector<vector<int>>&ans)
    {
        // n is answer 
        // k is no of digits 
        // ans rets list of lists
        if(n<0 || ls.size()>k)
            return;
        if(n==0 && ls.size()==k)
        {
            ans.push_back(ls);
            return;
        }
        
        for(int i=idx;i<=9;i++)
        {
            ls.push_back(i);
            combinations(k,i+1,n-i,ls,ans);
            ls.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ls;//to store list made during BT
        combinations(k,1,n,ls,ans);
        return ans;
    }
};