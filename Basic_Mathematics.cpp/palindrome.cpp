#include <iostream>
using namespace std;
class Solution {
  public:
    bool isPalindrome(int n) {
        if (n < 0) {
            n = -n;
        }

        int dulp = n;
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        }

        if (dulp == rev) {
            return true;
        } else {
            return false;
        }
    }
};
int main(){
    int num ;
    cout<< "Enter number ="<< endl;
    cin>> num;
    Solution obj;
     bool result = obj.isPalindrome(num);
     if(result == true){
        cout << "Palindrome"<< endl;
     }
     else{
        cout<< "Not Palindrome"<< endl;
     }

    return 0;
}