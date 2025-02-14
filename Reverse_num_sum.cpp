//Reverse number sum between range
#include<iostream>
using namespace std;

// to reverse a number using the modulo (%) and division (/) operations. It extracts the last digit using % 10, builds the reversed number by multiplying rev by 10 and adding the remainder, and continues until all digits are processed.
int main(){
    int s=21;
    int e=25;
    int rev_sum=0;

    for(int i=s;i<=e;i++){
        int num=i;
        int rev=0;
        while(num>0){
            int rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        // int diff=abs(i-rev);
        rev_sum+=rev;
    }
    cout<<rev_sum;
}