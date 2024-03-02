#include<iostream>
#include<vector>
using namespace std;

int findMinInRotatedSorted(vector<int> &arr, int lo, int hi){
    if(arr.size() == 1) return arr[0];
    if(arr[lo] < arr[hi]) return arr[lo];

    while(lo <= hi){
        int mid = lo + (hi-lo)/2;

        if(arr[mid] > arr[mid+1]) return mid + 1;
        if(arr[mid] < arr[mid-1]) return mid; 
        if(arr[mid] > arr[lo]){
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3, 4, 5, 1, 2};

    int resultIdx = findMinInRotatedSorted(arr, 0, arr.size()-1);

    cout<<resultIdx<<endl; 

    return 0;
}