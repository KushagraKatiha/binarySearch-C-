#include<iostream>
#include<vector>
using namespace std;

int findRoot(int tgtArr[], int tgt){
    
    int hi = tgt-1;
    int lo = 0; 
    int ans = 0;

    while(hi>=lo){
    int mid = lo+(hi-lo)/2;
        if((tgtArr[mid]*tgtArr[mid])>tgt){
            hi = mid-1;
        }else if((tgtArr[mid]*tgtArr[mid]<tgt)){
            ans = tgtArr[mid];
            lo = mid+1;
        }else{
            return tgtArr[mid];
        }
    }
    return ans;
}

int main(){
    // Find the square root of the given non-negative value x. Round it of to the nearest floor integer value.
    int tgt=4;
    int arr[tgt];

    for(int i = 1; i <= tgt; i++){
        arr[i] = i;
    }

    int result = findRoot(arr, tgt);
    cout<<result<<endl;
    return 0;
}