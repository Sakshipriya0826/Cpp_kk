#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[] = {"SAKSHI", "AMISHA", "ZAHRA", "RUHI"};

    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
