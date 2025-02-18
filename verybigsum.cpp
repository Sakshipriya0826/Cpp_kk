#include <bits/stdc++.h>
using namespace std;

/*
 * Problem Statement:
 * You are given an array of integers where each element can be very large (up to 10^10).
 * Your task is to compute and return the sum of all elements in the array.
 *
 * Function Signature:
 * long aVeryBigSum(vector<long> ar)
 *
 * Input Format:
 * - The first line contains an integer, 'n', denoting the number of elements in the array.
 * - The second line contains 'n' space-separated integers representing the array elements.
 *
 * Output Format:
 * - Print a single integer representing the sum of the elements in the array.
 *
 * Constraints:
 * 1 ≤ n ≤ 10
 * 0 ≤ ar[i] ≤ 10^10
 *
 * Example:
 * Input:
 * 5
 * 1000000001 1000000002 1000000003 1000000004 1000000005
 *
 * Output:
 * 5000000015
 */

// Function to compute the sum of large numbers
long aVeryBigSum(vector<long> ar) {
    long sum = 0; // Initialize sum to 0
    for (long num : ar) { 
        sum += num; // Add each number to sum
    }
    return sum; // Return the final sum
}

int main() {
    int ar_count;
    cin >> ar_count; // Read the number of elements

    vector<long> ar(ar_count); // Define vector to store numbers
    for (int i = 0; i < ar_count; i++) {
        cin >> ar[i]; // Read each number
    }

    long result = aVeryBigSum(ar); // Call function
    cout << result << endl; // Print result

    return 0;
}
