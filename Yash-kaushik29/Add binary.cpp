class Solution {
public:
    string addBinary(string a, string b) {
       int carry=0;
       string ans;

       int i = a.length()-1;
       int j = b.length()-1;

       while(i>=0 || j>=0) {
           int a_bit = i>=0 ? a[i--] - '0' : 0;
           int b_bit = j>=0 ? b[j--] - '0' : 0;

           int sum = a_bit + b_bit + carry;
           ans.insert(ans.begin(),(sum % 2) +'0');

           carry = sum/2;
       } 
        
       // FOR CARRYY
       if(carry) {
           ans.insert(ans.begin(), '1');
       }

       return ans; 
    }
};
