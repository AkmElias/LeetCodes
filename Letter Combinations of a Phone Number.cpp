class Solution {
public:
    vector<string> letterCombinations(string digits) {
    vector<string>res;
    //cin>>digits;
    if(digits == "")
        return res;
        
    vector<string>vec;
    string arr[] =  {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    for(int i = 0; i<10; i++)
        vec.push_back(arr[i]);

    vector<string>store;
        
    for(int i = 0; i<digits.size(); i++)
        store.push_back(vec[digits[i]-'0']);

    dfsRecursion(store,res,"",0);

    //vector<string>:: iterator it;

    return res;

    
}

   void dfsRecursion(vector<string>store,vector<string> &res, string temp, int num)
{

    if(num == store.size())
    {
        res.push_back(temp);
        return;
    }
    for(int i = 0; i < store[num].size(); i++)
    {
        dfsRecursion(store, res, temp + store[num][i], num+1);
    }
}
};
