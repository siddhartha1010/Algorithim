#include <iostream>

using namespace std;


int main(){
    int n;
    cout <<"Enter the size of the array:"<<endl;
    cin >>n;

    int arr[n];
    cout <<"Enter the elements of the array:"<<endl;
    for(int i =0;i<n;i++){
        cin >> arr[i];              
    }

    cout<<"the elements of array are:"<<endl;
    for (int i =0;i<n;i++ ){
        cout <<arr[i] << " "<<endl;

    }
    int sum=0;

    for (int i = 0 ;i<n;i++){
        sum += arr[i];
        if (sum <0){
            sum =0;
        }
        // }else{
        //     sum += arr [i];
        // }        
    }
        cout << "the kedens algo give the value "<<sum<<endl;
}  

    





// wont work will work for the posituve use INT_MIN for negative number which add base value as the lowest possible -ve numbers