//Transpose of a matrix
#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,3,5,7},{6,8,9,1}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           arr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}