class Solution {
public:
    int romanToInt(string s) {
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int nodes[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        map<string,int>mp;
        int result = 0;
        
        for(int i = 0;i<13;i++){          
            mp[romans[i]] = nodes[i];
        }
        
        int sum = 0,temp1,temp2;
        string tempc = "",tempd = "";
        
        for(int i = 0;i<s.length();){
            tempc+=s[i];
            tempd+=s[i+1];
            temp1 = mp[tempc];
        
            temp2 = mp[tempd];
            if(temp1<temp2){
                sum+=(temp2-temp1);
                i+=2;
            } else {
                sum+=temp1;
                i++;
            }
            tempc.clear();
            tempd.clear();
        }
        
        return sum;
    }
};
