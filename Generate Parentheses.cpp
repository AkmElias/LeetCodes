class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
   dfsBacktracking(res,"",0,0,n);
    return res;
   
    }
    void dfsBacktracking(vector<string> &res, string temp , int open, int close, int n){

   if(temp.length() == n*2){
       if(balanced(temp))
           return;
      res.push_back(temp);
      return;
   }
   if(open<n)
   dfsBacktracking(res, temp+"(", open+1, close, n);
   if(close<n)
   dfsBacktracking(res, temp+")", open, close+1, n);
}
    
bool balanced(string p){
        int count_closed = 0, count_open = 0;
        for(auto c: p){
            if(c == '(') count_open++;
            else count_closed++;
            if(count_closed > count_open){
                return true;
            }
        }
        return false;
    }
};
