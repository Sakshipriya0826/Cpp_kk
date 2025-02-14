//generate sum of pairs usig single array
#include <iostream>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum_pair=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum_pair=arr[i]+arr[j];
            cout<<sum_pair<<" ";
        }
    }
}