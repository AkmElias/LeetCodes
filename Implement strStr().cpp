class Solution {
public:
    int strStr(string haystack, string needle) {
        int lhaystack = haystack.length();
   int lneedle = needle.length();
   if(lneedle==0 && lhaystack==0)
       return 0;
        
   for(int i = 0;i<=lhaystack-lneedle;i++){
      
      string temp;
      temp.append(haystack.begin()+i,haystack.begin()+i+lneedle);
      if(temp==needle)
        return i;
   }
   return -1;
    }
};
