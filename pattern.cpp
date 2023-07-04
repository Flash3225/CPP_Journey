#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n to show fibonacci sequence upto n terms:"<<endl;
     int n;
     cin>>n;

     int a = 0, b = 1;
     cout<<"Desired fibonacci sequence is: "<<a<<" ";
     for(int i = 1; i<=n-1; i++){
         int sum = a + b;
         cout<<sum<<" ";

         a=b;
         b=sum;
     }
 }