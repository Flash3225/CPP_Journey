#include<iostream>
using namespace std;

void reverse(int arr[], int n){
        int start = 0;
        int end = n-1;
        while(start<=end){

            swap( arr[start], arr[end] );
            start++;
            end--;
        }
    
}


void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int brr[6] = {2,3,4,5,6,1};

    reverse(brr, 6);

    
    printArray(brr, 6);
    

    return 0;
}