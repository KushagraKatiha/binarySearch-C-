#include<iostream>
#include<vector>
using namespace std;

void firstPos(int arr[], int arrSize, vector<int> &output, int tgt){
    int hi = arrSize-1;
    int lo = 0;

    while(hi >= lo){
        int mid = lo + ((hi-lo)/2);

        if(arr[mid] == tgt){
            output[0] = mid;

            hi = mid-1;
        }else if(arr[mid] < tgt){
            lo = mid + 1;
        }else{
            hi = mid-1;
        }
    }


}

void lastPos(int arr[], int arrSize, vector<int> &output, int tgt){
    int hi = arrSize-1;
    int lo = 0;

    while(hi >= lo){
        int mid = lo + ((hi-lo)/2);

        if(arr[mid] == tgt){
            output[1] = mid;

            lo = mid+1;
        }else if(arr[mid] < tgt){
            lo = mid + 1;
        }else{
            hi = mid-1;
        }
    }
}

int main(){
    int tgt = 4;
    int arr[7] = {1, 2, 3, 3, 3, 5, 11};

    vector<int> output(2, -1);

    firstPos(arr, 7, output, tgt);
    lastPos(arr, 7, output, tgt);

    for(int i = 0; i < 2; i++){
        cout<<output[i]<<" ";
    }

    cout<<endl;

    return 0;
}