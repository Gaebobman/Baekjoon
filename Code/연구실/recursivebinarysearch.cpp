#include <iostream>

using namespace std;

void binsearch(int arr[], int head, int tail,int tar);
int main(){
  int odd[5]{1,2,3,4,5};

  int even[8]{1,2,3,4,5,6,7,8};

int target;
cin>> target;

binsearch(odd, 0, 4, target);
binsearch(even, 0, 7, target);


}


void binsearch(int arr[], int head, int tail,int tar){

  int mid;

  mid = (head+ tail) /2;

  if(arr[mid] == tar)
  {
    cout << "Target \"" << arr[mid] <<"\""<<" found."<<endl;
  }

  if(arr[mid]< tar)
  {

    binsearch(arr,mid+1, tail,tar);
  }
  if(arr[mid]>tar)
  {
      binsearch(arr,head, mid-1,tar);
  }
}
