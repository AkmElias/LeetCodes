class Solution {
public:
    int myAtoi(string str) {
      
    long long int temp,i,j;
      // str = "  +42";
    string tempString = "";

    int flag = 0,br = 0;
        int intFlag = 0;
        int spint = 0;
    for(int i = 0; i<str.size(); i++)
    {
       
        if((str[i] == ' ' && flag != 32 && flag != 0) || ((str[i]<48 || str[i]>57) && str[i]!=32 && str[i] != 43 && str[i] != 45) || (str[i] == '+' && intFlag) || (str[i] == '-' && intFlag ) || (str[i] == '-' && (flag>=48 && flag<=57)) || (str[i] == '+' && (flag>=48 && flag<=57)))
        {
            
            break;
        }
        
        
            else if((str[i] == ' ' && intFlag == 0) || (str[i] == '0' && spint == 0 )){
               flag = int(str[i]);
               // cout<<flag<<endl;
               continue;
            }
     
        else
        {
            //cout<<str[i];
            tempString+=str[i];
               flag = int(str[i]);
               intFlag = 1;
            if(str[i]!=43 && str[i]!=45){
                spint = 1;
            }
        }


    }
   //cout<<tempString<<endl;
        
    if(tempString.size()>11)
    {
        if(tempString[0]==45)
            return INT_MIN;
        return INT_MAX;
    }
    //cout<<tempString<<endl;
    temp = 0;
    int sign = 0;
    if(tempString[0]=='-' || tempString[0]=='+')
    {
        sign = int(tempString[0]);
        //cout<<sign<<endl;

    }

    if(sign)
        j = 1;
    else
        j = 0;

    for(i = j ; i<tempString.size(); i++)
    {

        temp*=10;
        temp = temp + (tempString[i]- '0')%10;

    }
    if(sign == 45)
    {
        temp = temp - (temp*2);
    }


    if(flag==0)
        return flag;
    else if(temp<INT_MIN)
        return INT_MIN;
    else if (temp>INT_MAX)
        return INT_MAX;
    else
        return temp;

    }
};
