//Sum of pairs using two array
#include<iostream>
using namespace std;

int main(){
    int arr_1[]={1,2,3,4};
    int n= sizeof(arr_1)/sizeof(arr_1[0]);
    int arr_2[]={5,6,7,8};
    int m= sizeof(arr_2)/sizeof(arr_2[0]);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int pair_sum = arr_1[i]+arr_2[j];
            cout << pair_sum << " ";
        }
    }
}