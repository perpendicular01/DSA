// https://www.geeksforgeeks.org/program-to-reverse-an-array/


/*
    Given an array arr[], the task is to reverse the array. Reversing 
    an array means rearranging the elements such that the first element 
    becomes the last, the second element becomes second last and so on.

Examples:

Input: arr[] = {1, 4, 3, 2, 6, 5}  
Output: {5, 6, 2, 3, 4, 1}
Explanation: The first element 1 moves to last position, the second 
element 4 moves to second-last and so on.


Input: arr[] = {4, 5, 1, 2} 
Output: {2, 1, 5, 4}
Explanation: The first element 4 moves to last position, the second 
element 5 moves to second last and so on.


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

    // reverse(arr.begin(), arr.end());

    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
}