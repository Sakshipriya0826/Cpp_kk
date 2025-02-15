//count the frequency of each element in an array
#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[]={2,3,4,5,2,6,6,6,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int count = 1;

    bool vis[n]={false};
   // vis.fill(false);

    for(int i=0; i<n; i++){
        if(vis[i]==false){
            int count=1;
            vis[i]=true;
            for(int j=i+1;j<n; j++){
                if(arr[i]==arr[j]){
                    vis[j]=true;
                count++;
                }
            }
            cout<<arr[i]<<"->"<<count;
        }
        cout<<endl;
    }



}