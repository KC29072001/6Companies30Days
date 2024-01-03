
class Solution {
public:
    
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        
        map<string, vector<int>> w;

       
        for (auto it : access_times) 
        {
            //w[n] key is name of emp and val is stoi(b)
            string n = it[0], at = it[1];
            w[n].push_back(stoi(at));
        }
      
        vector<string> ans;
  
        for (auto &[x, l] : w) // x is name , l: list of times in int 
        {
             //2d arr ka ptr. acc t
             //vec<str> return
            
            sort(begin(l), end(l));
            int k = l.size();
            bool f = false;
            for (int i = 0; i + 3 <= k; ++i)
                f |= l[i + 2] < l[i] + 100;
            if (f) ans.push_back(x);
        }

        return ans;
    }
};