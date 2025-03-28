class Solution {
public:
    int reverse(int x) {
        long rev=0,rem=0;
        int temp=x;
         if(x<0) rev=-1*rev;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
      
       if(-2147483648>rev || 2147483647<rev)
         {
            return 0;
         }
        return rev;
    }
};