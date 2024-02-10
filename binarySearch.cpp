#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int target){
    int lo = 0;
    int hi = input.size()-1;
    
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(input[mid] > target){
            hi = mid-1;
        }else if(input[mid] < target){
            lo = mid+1;
        }else{
            return mid;
        }
    }

    return -1;
}

int main(){
    // Implement binary search 
    
    int size; cin>>size;
    vector<int> input(size);

    for(int i = 0; i < size; i++){
        int element; cin>>element;
        input[i] = element;
    }

    // print the input
    for(int i = 0; i < size; i++){
        cout<<input[i]<<" ";
    }

    int target; cin>>target;

    // Implement binary search
    int targetIndex = binarySearch(input, target);
    cout<<targetIndex<<endl;
    return 0;
}