#include <iostream>
using namespace std;

/*void intArray (int y[], int size, int z) {
     cout<<"Initializing the Array with: "<< z << endl;
     for(int i=0; i<size; i++) {
            y[i]=z;
        }
}

void printArray (int x[], int n){
    cout<<"Printing the Initialized Array:\n";
    for(int i=0; i<n; i++) {
        cout<<x[i];
    }
}*/

int getMax(int num[], int n){
   int maxi=INT16_MIN;

   for(int i=0; i<n; i++){
    maxi = max (maxi, num[i] );
    /*if(num[i]>max){
        max=num[i];
    }*/

   }
   return maxi;
}

int getMin(int num[], int n){
   int min= INT16_MAX ;
   for(int i=0; i<n; i++){
    if(num[i]<min){
        min=num[i];
    }
   }
   return min;
}

int main() {

int size;
cout<<"Enter the size of array: ";
cin>>size;

int arr[100];

cout<<"Initialize the elements of array : ";

for (int i=0; i<size; i++){
    cin>>arr[i];
}

cout<<"The maximum of array is: "<<getMax(arr,size)<<"\nThe minimum of array is: "<<getMin(arr,size);

return 0; 
}