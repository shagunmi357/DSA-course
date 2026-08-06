// Extraction of digit 
// If we have to get last digit or every digit separately like 7789 to 7,7,8,9
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<< endl;
    cin >> n;
    while(n> 0){
        int digit = n% 10;
        cout<< digit << endl;
        n= n/10;
    }
    

    return 0;
}