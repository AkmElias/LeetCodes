class Solution {
public:
    string longestPalindrome(string s) {
       int i,j,n = s.length();
 int maxlength = 1,start = 0;
 int low,high,flag = 0;

 for(int i = 1; i<n; ++i){

 //searching for even palindrm..
    low = i-1;
    high = i;

    while(low>=0 && high<n && s[low] == s[high]){
        flag = 1;

        if(high-low+1>=maxlength){

            maxlength = high - low + 1;
            start = low;
        }
        low--;
        high++;
    }

    //searching for odd palindrom..
    low = i-1;
    high = i+1;

    while(low>=0 && high<n && s[low]==s[high] )
    {
       flag = 2;
        if(high-low+1>=maxlength){

            maxlength = high - low + 1;
            start = low;
        }
        low--;
        high++;
    }


 } 
        return s.substr(start, maxlength);
     
    }
};
