// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

/*
Given an array of size N. The task is to find the maximum and the minimum 
element of the array using the minimum number of comparisons.

Examples:

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9


Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    cout << "Minimum element is: " << arr[0] << endl;
    cout << "Maximum element is: " << arr[n-1] << endl;
}