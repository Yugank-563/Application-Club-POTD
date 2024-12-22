//GCD of two numbers
//Approach--"Euclid's Algorithm"

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b!=0){
            int c = b;
            b = a % b;
            a = c;
        }
        return a;
    }
};
