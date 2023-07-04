#include<iostream>
using namespace std;

void swap(int *i, int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    cout<<i<<"\n"<<j<<"\n";

}
int main(){
    int x,y;
    cout<<"Enter the value of x & y\n";
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After swap call\n";
    cout<<x<<"\n"<<y;
    return 0;
}