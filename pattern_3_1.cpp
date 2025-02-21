// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// A
// B C
// C D E
// D E F G
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 13
// Sample Input 1:
// 5
// Sample Output 1:
// A
// B C
// C D E
// D E F G
// E F G H I
// Sample Input 2:
// 6
// Sample Output 2:
// A
// B C
// C D E
// D E F G
// E F G H I
// F G H I J K
// find for n=9

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=i;j<=2*i;j++){
            cout<<(char)(j+65);
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}