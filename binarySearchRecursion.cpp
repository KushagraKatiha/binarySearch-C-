#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int lo, int hi, int tgt){

    int mid = (lo+hi)/2;
    if(lo > hi) return -1;

    if(input[mid] == tgt) return mid;
    
    if(input[mid] > tgt) return binarySearch(input, lo, mid-1, tgt);
    if(input[mid] < tgt) return binarySearch(input, mid+1, hi, tgt);

    return -1;

}

int main(){
    // Binary Search Using Recursion

    int size; cin>>size;
    vector<int> input;

    for(int i = 0; i < size; i++){
        int ele; cin>>ele;
        input.push_back(ele);
    }

    // print array
    for(int i = 0; i < size; i++){
        cout<<input[i]<<" ";
    }

    int tgt; cin>>tgt;

    int result = binarySearch(input, 0, size-1, tgt);
    cout<<result<<endl;


    return 0;
}