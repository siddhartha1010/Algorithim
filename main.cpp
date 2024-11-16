#include <iostream>
#include <limits.h>
using namespace std;

//Brutte force 
// int main() {
//     int n = 5;
//     int arr[n] = {-1, 2, 3, -4, 5};
//     int maxSum =0;

//     for (int start = 0; start < n; start++) {
//         int currSum =0;
//         for (int end = start; end < n; end++) {
//             // for (int i = start; i <= end; i++) {
//             //     cout << arr[i]; 
//             // }
//             currSum+=arr[end];
//             maxSum = max(currSum,maxSum);
//         }
//     }

//     cout <<"max subarray sum ="<<maxSum<<endl;

//     return 0;
// }



//Using KADANE'S ALGORITHIM::IT has linear time complexity

int main(){
    int max_sum = INT_MIN;
     int n = 5;
    int arr[n] = {-1, 2, 3, -4, 5};
    int curSum=0;    
    for (int i=0;i<n;i++){
        curSum+=arr[i];
        max_sum=max(curSum,max_sum);
        if (curSum<0){
            curSum=0;
        }

    }
    cout <<max_sum<<endl;

}