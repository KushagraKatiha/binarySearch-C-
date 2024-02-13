#include<iostream>
#include<vector>
using namespace std;

int firstPos(int arr[], int arrSize, vector<int> &output, int tgt){
    int hi = arrSize-1;
    int lo = 0;
    int ans = -1;
    while(hi >= lo){
        int mid = lo + ((hi-lo)/2);

        if(arr[mid] == tgt){
            ans = mid;

            hi = mid-1;
        }else if(arr[mid] < tgt){
            lo = mid + 1;
        }else{
            hi = mid-1;
        }
    }
    
    return ans;
}

int lastPos(int arr[], int arrSize, vector<int> &output, int tgt){
    int hi = arrSize-1;
    int lo = 0;
    int ans = -1;

    while(hi >= lo){
        int mid = lo + ((hi-lo)/2);

        if(arr[mid] == tgt){
            ans = mid;

            lo = mid+1;
        }else if(arr[mid] < tgt){
            lo = mid + 1;
        }else{
            hi = mid-1;
        }
    }

    return ans;
}

int main(){
    int tgt = 3;
    int arr[7] = {1, 2, 3, 3, 3, 5, 11};

    vector<int> output(2);

    int fst = firstPos(arr, 7, output, tgt);
    int lst = lastPos(arr, 7, output, tgt);

    output[0] = fst;
    output[1] = lst;

    cout<<output[0]<<" "<<output[1]<<endl;

    return 0;
}