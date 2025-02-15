//Count of distinct/unique element in an array
#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[]={1,2,3,2,4,5,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count=0;
    bool vis[n]={false};

    for(int i=0; i<n; i++){
        if(vis[arr[i]]==false){
            count++;
            vis[arr[i]]=true;
        }
    }
    cout<<count;
}
