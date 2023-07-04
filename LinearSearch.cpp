#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}

int main() {
  int arr[10]={1,3,8,12,9,4,-2,5,0,10};

  cout<<"Enter the key to search for: ";
  int key;
  cin>>key;

  bool found = search(arr, 10 , key);

  if (found)
  {
    cout<<"\nKey is present";
  }
  else{
    cout<<"\nThe Key is not present in this array.";
  }
  
}