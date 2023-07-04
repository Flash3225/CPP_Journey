#include<iostream>
#include<vector>

using namespace std;

void merge(int a1[], int n, int a2[], int m, int a3[]){
    int count = m+n;
    int i=0;
    int j=0;
    for(int k=0; k<count; k++){
        if(a1[i]<a2[j]){
        a3[k]=a1[i++];
    }
    else{
        a3[k]=a2[j++];
    }
    }
    
}

void printArray (int a[], int n) {
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

int arr1[5]={1,3,6,7,9};
int arr2[4]={2,4,5,8};
int arr3[9]={0};

merge(arr1, 5, arr2, 5, arr3);
printArray (arr3, 9);

    return 0;
}