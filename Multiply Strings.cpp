class Solution {
public:
    string multiply(string num1, string num2) {
      string result;
        result.resize(20);

    int carry;

    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());

    vector<int>digit(num1.size()+num2.size(),0);

    for(int i = 0 ; i<num1.size(); i++)
    {
        for(int j = 0; j<num2.size(); j++)
        {

            digit[i+j]+= (num1[i]-'0') * (num2[j]-'0');
        }
    }

    for(int i = 0; i<digit.size(); i++)
    {

        if(digit[i]>=10)
        {
            carry = digit[i]/10;
            digit[i] = digit[i]%10;
            digit[i+1] = digit[i+1]+carry;
        }
        result=string(1,digit[i]+'0')+result;
    }

    int index = result.find_first_not_of('0');

    result = result.substr(index);

    return result[0] == 0 ? "0":result;
    }
};
