// 1.create  the given pattern 
// 000000
// 000000
// 000000
// 000000
// 2.create the given pattern 
// 0
// 00
// 000
// 0000
#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<=4;i++){
    //     for(int j=0;j<=5;j++){
    //         cout<<"0";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            cout<<"0";
        }
        cout<<endl;
    }
}