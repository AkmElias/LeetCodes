class Solution {
public:
    bool isPalindrome(int x) {
        int array[102];
   
    int num = x;
    int n = 1,i = 0;
    if(num<10&&num>0)
    {
        //cout<<"true"<<endl;
        return 1;
    }
    if(num<0)
    {
        //cout<<"false"<<endl;
        return 0;
    }
    while(num>0)
    {
        array[i++] = num%10;
        //cout<<num%10<<endl;
        num/= 10;

    }
    int flag = 0;
    int low,high;
    if(i%2==0)
    {
        low = i/2-1;
        high = i/2;
    }
    else
    {
        low = i/2-1;
        high = i/2+1;
    }
    //cout<<low<<" "<<high<<endl;
    while(low>=0&&high<i)
    {

        if(array[low--]!=array[high++])
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        return 0;
    else
        return 1;
    }
};
