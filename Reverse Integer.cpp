class Solution {
public:
    int reverse(int x) {
        long long reverse=0,num = x;
   
    
    int n = 1,i = 0;
    if(num<0&&num>-2147483648){
        num = 0 - num;
        n = 0;
    }
        if(num<-2147483647||num>2147483647){
          //  cout<<num<<endl;
            return 0;
        }
        
    while(num>0)
    {
       
        reverse*= 10;
        reverse+= num%10;
        // cout<<reverse<<endl;
      
        num/= 10;

    } 
        if(reverse<-2147483647||reverse>2147483647){
          //  cout<<num<<endl;
            return 0;
        }
        if(n == 0){
        reverse = reverse - (reverse*2);
    }
       if(reverse> pow(2,31)-1){
           reverse = 0;
       }
        return reverse;
    }
};
