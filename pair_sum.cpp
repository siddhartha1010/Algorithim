
#include <iostream>

using namespace std;


int main(){
    int n = 6;
    int arr[n] = {1, 5, 7, -1, 5, 3};
    int target = 6;

    for (int i =0 ; i<n ;i++){
        if(arr[0] + arr[i] == target){
            cout << "the emelments are"<<arr[0]<<" "<<arr[i]<<endl;
        }    
    }
     for (int i =1 ; i<n ;i++){
        if(arr[1] + arr[i] == target){
            cout << "the emelments are"<<arr[1]<<" "<<arr[i]<<endl;
        }    
    }
    for (int i =2 ; i<n ;i++){
        if(arr[2] + arr[i] == target){
            cout << "the emelments are"<<arr[2]<<" "<<arr[i]<<endl;
        }    
    }
}