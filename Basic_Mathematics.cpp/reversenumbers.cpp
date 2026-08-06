#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<< endl;
    cin >> n;
    int rev = 0;
    while(n> 0){
        int digit = n% 10;
        n= n/10;
        rev = (rev * 10) + digit;
       
    }
     cout<< rev <<endl;
    

    return 0;
}