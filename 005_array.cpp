#include<iostream>
using namespace std;

// sum of array elements

int sumOfArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

// maximum element in array

int maxInArray(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

// minimum element in array
int minInArray(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

// reverse an array
void reverseArray(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// linear search
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

// binary search (array must be sorted)
int binarySearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}


int main(){

    int A[2][3];

    for(auto& x: A){
        for(auto& y: x){
            cin>>y;
        }
    }
    for(auto& x: A){
        for(auto& y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}