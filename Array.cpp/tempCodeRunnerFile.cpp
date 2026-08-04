// Better Approach
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int secondlargest(vector<int>&arr){
//         int largest = arr[0];
//         int secondlargest = -1;
//         for(int i =0 ; i<arr.size(); i++){
//             if (arr[i] > largest){
//                  largest = arr[i];     
//             }
//         }
//          for(int i =0 ; i<arr.size(); i++){
//             if (arr[i] != largest && arr[i] > secondlargest){
//                  secondlargest = arr[i];
                   
//             }
//         }
//         return secondlargest;
//     }
// };
// int main(){  
//     vector<int> arr = {1, 2, 3,3,2,6,4,5,5,1};
//     Solution sol;
//     int secondlargest = sol.secondlargest(arr);
//     cout << "The second largest element is: " << secondlargest ;
//     return 0;
// }