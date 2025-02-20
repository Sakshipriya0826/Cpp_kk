// Question 1.
// for n=3     
// pattern is 
// 1
// 2 2
// 3 3 3
// for n=5
// pattern is 
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// now print for n=6!!

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
