#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isarraysorted(int arr[],int n){
      for(int i = 0; i<n ; i++)  {
        if(arr[i] <arr[i-1]){
           return false;
        }  
        }
        return true;
    }
};
int main(){
    int a[] = {1,2,3,4,5};
    Solution obj;
    bool b= obj.isarraysorted(a , 6);
    cout << b;
    return 0;
}