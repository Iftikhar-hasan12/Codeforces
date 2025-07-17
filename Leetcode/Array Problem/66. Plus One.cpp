class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        int c=0;
   for(int i=n-1; i>=0; i--)
   {
       if( digits[i]<9)
       {
           c=0;
           digits[i]++;
           return digits;
       }else {
           c=1;

       digits[i]=0;

       }

   }
  digits.insert(digits.begin(), 1);

     return digits;

  
  



    }
};
