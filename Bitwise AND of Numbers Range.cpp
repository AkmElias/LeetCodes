class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int ans=0;
        if(m==0 || n==0)
            return 0;
         if(m==n)
            return m;
       
        while(m!=0 || n!=0)
        {
             int x=log2(m);
            int y=log2(n);
            if(x!=y)
            return ans;
             int z=pow(2,x);
             ans=ans+z;
            m=m-z;
            n=n-z;
            
        }
        return ans;
    }
    
};
