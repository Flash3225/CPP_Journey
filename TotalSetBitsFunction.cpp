#include<iostream>
using namespace std;

int SetBit(int x){
    int count=0;
    while(x!=0){
        if(x&1){
            count++;
        }
        x=x>>1;
    }
    return count;
}

int TotalBits(int a, int b){
    int count1= SetBit(a);
    int count2= SetBit(b);
    return (count1 + count2);
}

int main(){
    int x, y;
    cout<<"Enter two numbers whose total set bits are to be found\n";
    cin>>x>>y;
    cout<<"Total number of set bits are = "<<TotalBits(x,y);
    return 0;

}