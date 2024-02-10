#include<iostream>
#include<vector>
using namespace std; 

int searchFirstOccurence(vector<int> &input, int tgt){
    int size = input.size();
    int lo = 0; 
    int hi = size-1;
    int ans = -1;

    while(hi > lo){
        int mid = lo + ((hi-lo)/2);

        if(input[mid] > tgt){
            hi = mid-1;
        }else if(input[mid] < tgt){
            lo = mid+1;
        }else{
            ans = mid;
            hi = mid - 1;
        }
    }
        return ans;
}

int main(){
    // Find the first occurence of a given element x, given that the given array is sorted.If no occurences of x is found return x.
    int size; cin>>size;
    vector<int> input;

    for(int i = 0; i < size; i++){
        int ele; cin>>ele;
        input.push_back(ele);
    }

    int tgt; cin>>tgt;

    int result = searchFirstOccurence(input, tgt);

    cout<<result<<endl;

    return 0;
}