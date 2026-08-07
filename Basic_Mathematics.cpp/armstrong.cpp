#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter number :" << endl;
    cin>>n;
    int dulp = n;
    int sum = 0;
    while( n > 0){
        int digit = n%10;
        sum = sum + (digit * digit *digit);
        n = n/10;
    }
    if(dulp == sum){
        cout << "yes"<< endl;
    }
    else{
        cout << "No" << endl;
    }

return 0;
}