#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int arr[11]={1,2,3,4,5,5,4,3,2,1,0};

    cout<<"The unique element is: "<<findUnique(arr,10);

    
    return 0;
}