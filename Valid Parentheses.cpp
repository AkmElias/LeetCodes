class Solution {
public:
    bool isValid(string s) {
       //s = "([)";
        if(s.length()==0)return true;
        stack<char>S;
        S.push(s[0]);
        
        for(int i = 1;i<s.length();i++){
            if(!S.empty()){
            if((s[i]==')' && S.top()=='(')||(s[i]=='}' && S.top()=='{')||(s[i]==']' && S.top()=='[')){
                //cout<<Q.top()<<i<<endl;
                S.pop();
            } 
                 else {
                S.push(s[i]);
            }
            }      
                else {
                S.push(s[i]);
            }
        }
        if(S.empty())
            return true;
        return false;
    }
};
