// optimal solution to find the largest element in an array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>&arr ) {
      int largest = arr[0];
      for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
        
      }
      return largest;
    }
    };
    int main() {
        vector<int> arr = {1, 2, 3, 4, 5};
        Solution sol;
        int largest = sol.largestElement(arr);
        cout << "The largest element is: " << largest ;
        return 0;
    }