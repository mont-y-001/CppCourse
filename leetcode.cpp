easier way to do complement of base 10 integer:-  (let n = 5);
int num = 0;
int i = 0;

while (n!=0) {
int bit,rev;
bit = n & 1;      // finding each bit of 5 i.e. 101
rev = bit ^ 1; // taking xor of each bit with one, which turns it into complementary (1xor1=0. & 0xor 1 = 1)
n = n>>1;
if (rev == 1) {
num = pow(2,i)*rev + num;
}
i = i + 1;
}  

return num;

the xor operator turns 101(binary of 5) to 010(complement).
and the num gives us output = 2;





POWER OF TWO

I have used binary digits to find solution , in binary number system
1 = 01
2 =10
4 = 100
8 = 1000
16 = 10000
My approach is I have converted n into binary string and checked if 1 appear excatly once

    public boolean isPowerOfTwo(int n) {
        int count = 0;
        
        if(n == 1)
            return true;
        if(n < 0)
            return false;
        
        String bin = Integer.toBinaryString(n);
        // int h = Integer.parseInt(bin);
        
        for(int i=0 ;i< bin.length();i++)
        {
            if(bin.charAt(i) == '1')
                count++;
        }
        
        
        if(count == 1)
            return true;
        else 
            return false;
    }
}



class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool result ; 
        
        
        while(n!=0){
            int rem = n%2;
            if(rem==0){
                n = n/2;
            }
            else if(rem!=0){
                result = false;
                break;
            }
            result = true;
        }
        if(n==0){
            result = false;
        }
        if(n == 1){
            result = true;
        }
        return result;
    }
};