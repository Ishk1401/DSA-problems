#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0 ; i < n-1 ; i++){
        int mini= i;
        for(int j= i+1; j < n ; j++){
            if( arr[j] < arr[mini] ) mini = j;
        }
        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    /*dynamically allocated an array of size n, added
    line because complier was showing problems in my code
    and giving the warnings of "ISO C++ forbids variable 
    length array"*/
    int* arr = new int[n];
    cout << "Enter the elements of array : ";
    for(int i = 0 ; i<n ; i++) cin>> arr[i];

    
    cout << "input array is : ";
    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";

    selection_sort(arr,n);

    cout << "\nSorted array is : "; 
    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
    
    delete[] arr;
    return 0; 
}



